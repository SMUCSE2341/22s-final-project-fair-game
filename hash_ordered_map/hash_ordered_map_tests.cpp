//
// Created by Adam Escobedo on 4/7/2022.
//

#include "../catch.hpp"
#include "hash_ordered_map.h"
#include <iostream>
#include <fstream>
#include <unordered_map>

TEST_CASE("Testing basic constructors and destructor", "[hash_ordered_map]"){
    SECTION("Testing default constructor"){
        hash_ordered_map<char, int> testDummy;
        REQUIRE(testDummy.size() == 0);
        REQUIRE(testDummy.is_empty() == true);
    }
}

TEST_CASE("Testing hash_ordered_map filling and reading methods", "[hash_ordered_map]"){
    hash_ordered_map<char, int> testDummy;

    SECTION("Testing \"U& hash_ordered_map<T, U>::operator[](const T&)\""){
        testDummy['A'] = 123;
        REQUIRE(testDummy['A'] == 123);
        REQUIRE(testDummy.size() == 1);
        REQUIRE(testDummy.is_empty() == false);

        hash_ordered_map<std::string, int> homTestString;
        homTestString["Adam"] = 123;
        REQUIRE(homTestString["Adam"] == 123);
        REQUIRE(homTestString.size() == 1);
        REQUIRE(homTestString.is_empty() == false);
    }

    SECTION("Testing \"hash_ordered_map<T, U>& hash_ordered_map<T, U>::emplace_pair(const T &key, const U &value)\""){
        testDummy.emplace_pair('A', 123);
        REQUIRE(testDummy.read_at('A') == 123);
        REQUIRE(testDummy.size() == 1);
        REQUIRE(testDummy.is_empty() == false);
    }

    SECTION("Testing \"U hash_ordered_map<T, U>::read_at(const T &key) const\""){
        testDummy.emplace_pair('A', 123);
        REQUIRE(testDummy.read_at('A') == 123);

        bool error = false;
        try{
            testDummy.read_at('?');
        }
        catch (const std::invalid_argument& e){
            error = true;
        }
        REQUIRE(error);
    }

    SECTION("Testing bool hash_ordered_map<T, U>::contains(const T &key) const\""){
        testDummy.emplace_pair('A', 123);
        REQUIRE(testDummy.contains('A') == true);
        REQUIRE(testDummy.contains('B') == false);
    }

    SECTION("Testing \"void hash_ordered_map<T, U>::increase_max_cap()\" by building with \"U& hash_ordered_map<T, U>::operator[](const T&)\""){
        int counter[27];
        for (int & it : counter) {
            it = 0;
        }

        for (int i = 0; i < 100; ++i) {
            char key = (i % 26) + 'A';
            testDummy[key] += i;
            counter[key & 31] += i;
        }
        REQUIRE(testDummy.size() == 26);
        REQUIRE(testDummy.is_empty() == false);

        for (int i = 0; i < 26; ++i) {
            char key = i + 'A';
            REQUIRE(testDummy.contains(key) == true);
            REQUIRE(testDummy[key] == counter[key & 31]);
            REQUIRE(testDummy.read_at(key) == counter[key & 31]);
        }
    }

    SECTION("Testing \"void hash_ordered_map<T, U>::increase_max_cap()\" by building with \"hash_ordered_map<T, U>& hash_ordered_map<T, U>::emplace_pair(const T &key, const U &value)\""){
        int counter[27];
        for (int & it : counter) {
            it = 0;
        }

        for (int i = 0; i < 100; ++i) {
            char key = (i % 26) + 'A';
            int randNum = rand();
            testDummy.emplace_pair(key, randNum);
            counter[key & 31] = randNum;
        }
        REQUIRE(testDummy.size() == 26);
        REQUIRE(testDummy.is_empty() == false);

        for (int i = 0; i < 26; ++i) {
            char key = i + 'A';
            REQUIRE(testDummy.contains(key) == true);
            REQUIRE(testDummy[key] == counter[key & 31]);
            REQUIRE(testDummy.read_at(key) == counter[key & 31]);
        }
    }

    SECTION("Testing large file reading via \"hash_ordered_map/test_Oedipus-King-of-Thebes.txt\" and comparing STL unordered_maps to HashOrderedMaps"){
        std::ifstream inFile;
        inFile.open("../hash_ordered_map/test_Oedipus-King-of-Thebes.txt");
        if(!inFile.is_open()) {
            std::cout << "Error in Testing large file reading via \"../hash_ordered_map/test_Oedipus-King-of-Thebes.txt\" | file could not open" << std::endl;
            REQUIRE(false);
            return;
        }

        hash_ordered_map<std::string, int> wordFreqCounterCUSTOM;
        std::unordered_map<std::string, int> wordFreqCounterSTL;
        while(inFile.good()){
            std::string word;
            inFile >> word;
            wordFreqCounterCUSTOM[word]++;
            wordFreqCounterSTL[word]++;
        }
        inFile.close();

        REQUIRE(wordFreqCounterCUSTOM.size() == wordFreqCounterSTL.size());

        for (const auto & it : wordFreqCounterSTL) {
            REQUIRE(wordFreqCounterCUSTOM.contains(it.first) == true);
            REQUIRE(wordFreqCounterCUSTOM.read_at(it.first) == it.second);
        }
    }
}

TEST_CASE("Testing hash_ordered_map clearing methods", "[hash_ordered_map]") {
    hash_ordered_map<char, int> testDummy;

    SECTION("Testing \"hash_ordered_map<T, U> &hash_ordered_map<T, U>::clear_value_at(const T &key)\""){
        for (int i = 0; i < 26; ++i) {
            char key = i + 'A';
            int randNum = rand();
            testDummy.emplace_pair(key, randNum);
        }
        REQUIRE(testDummy.size() == 26);

        testDummy.clear_value_at('A');
        REQUIRE(testDummy.size() == 25);

        testDummy.clear_value_at('B');
        REQUIRE(testDummy.size() == 24);

        bool error = false;
        try{
            testDummy.clear_value_at('?');
        }
        catch (const std::invalid_argument& e){
            error = true;
        }
        REQUIRE(error);

        error = false;
        try{
            testDummy.read_at('A');
        }
        catch (const std::invalid_argument& e){
            error = true;
        }
        REQUIRE(error);

        REQUIRE(testDummy.contains('A') == false);
        REQUIRE(testDummy.contains('B') == false);
    }

    SECTION("Testing \"hash_ordered_map<T, U> &hash_ordered_map<T, U>::clear()\""){
        for (int i = 0; i < 26; ++i) {
            char key = i + 'A';
            int randNum = rand();
            testDummy.emplace_pair(key, randNum);
        }
        REQUIRE(testDummy.size() == 26);

        testDummy.clear();
        REQUIRE(testDummy.size() == 0);
        REQUIRE(testDummy.is_empty() == true);

        bool error = false;
        try{
            testDummy.read_at('A');
        }
        catch (const std::invalid_argument& e){
            error = true;
        }
        REQUIRE(error);
    }
}

TEST_CASE("Testing copy-constructor and assignment operator", "[hash_ordered_map]"){
    int counter[27];
    for (int & it : counter) {
        it = 0;
    }

    hash_ordered_map<char, int> testDummy;
    for (int i = 0; i < 26; ++i) {
        char key = i + 'A';
        int randNum = rand();
        testDummy.emplace_pair(key, randNum);
        counter[key & 31] = randNum;
    }

    SECTION("Testing copy-constructor"){
        hash_ordered_map<char, int> homChar(testDummy);
        REQUIRE(homChar.size() == 26);
        REQUIRE(homChar.is_empty() == false);

        for (int i = 0; i < 26; ++i) {
            char key = i + 'A';
            REQUIRE(testDummy.contains(key) == true);
            REQUIRE(homChar.contains(key) == true);
            REQUIRE(testDummy.read_at(key) == counter[key & 31]);
            REQUIRE(homChar.read_at(key) == counter[key & 31]);
            REQUIRE(homChar.read_at(key) == testDummy.read_at(key));
        }
    }

    SECTION("Testing assignment operator"){
        hash_ordered_map<char, int> homChar;
        homChar = testDummy;
        REQUIRE(homChar.size() == 26);
        REQUIRE(homChar.is_empty() == false);

        for (int i = 0; i < 26; ++i) {
            char key = i + 'A';
            REQUIRE(testDummy.contains(key) == true);
            REQUIRE(homChar.contains(key) == true);
            REQUIRE(testDummy.read_at(key) == counter[key & 31]);
            REQUIRE(homChar.read_at(key) == counter[key & 31]);
            REQUIRE(homChar.read_at(key) == testDummy.read_at(key));
        }
    }
}
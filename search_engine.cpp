//
// Created by drewharris on 4/7/2022.
//

#include <iostream>
#include <thread>
#include "SearchEngine.h"
#include <future>

SearchEngine::SearchEngine(std::string data_folder) {
    this->data_folder = data_folder;
    this->authors = new std::unordered_map<std::string, std::vector<std::string>>();
    this->processor = new Processor(this->authors);
}

SearchEngine::~SearchEngine() {
    delete this->processor;
    delete this->authors;
}

void printProgressBar(double progress) {
    int barWidth = 70;
    std::cout << "[";
    int pos = barWidth * progress;
    for (int i = 0; i < barWidth; ++i) {
        if (i < pos) std::cout << "■";
        else if (i == pos) std::cout << "▶";
        else std::cout << " ";
    }
    std::cout << "] " << int(progress * 100.0) << " %\r";
    std::cout.flush();
}

void SearchEngine::generateIndex() {
    std::future<std::string> fut = std::async(std::launch::async, &Processor::generateIndex, this->processor,
                                              this->data_folder);
    while (fut.wait_for(std::chrono::milliseconds(41)) != std::future_status::ready) {
        double progress = this->processor->getProgress();
        if (progress > 0) {
            printProgressBar(progress);
        }
    }
    printProgressBar(1);
    std::cout << std::endl;
}
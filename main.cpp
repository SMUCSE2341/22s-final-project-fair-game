#include <iostream>
#include "catch_setup.h"
#include "SearchEngine.h"


int main(int argc, char **argv) {
    if (argc == 1) {
        runCatchTests();
        return 0;
    } else {
        SearchEngine engine(argv[2]);
        engine.buildTreeFromCache();
//        engine.generateIndex();
        try {
            engine.testFindWord("global");
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
//        engine.cacheTree();
    }
    return 0;
}

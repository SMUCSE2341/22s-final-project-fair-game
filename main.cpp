#include <iostream>
#include "CatchTests/catch_setup.h"
#include "SearchEngine/SearchEngine.h"


int main(int argc, char **argv) {
    if (argc == 1) {
        runCatchTests();
        return 0;
    } else {
        SearchEngine engine(argv[2]);
        engine.InitiateConsoleInterface();
    }
    return 0;
}

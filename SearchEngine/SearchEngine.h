//
// Created by Drew Harris on 4/7/2022.
//

#ifndef INC_22S_FINAL_PROJ_SEARCHENGINE_H
#define INC_22S_FINAL_PROJ_SEARCHENGINE_H

#include "../Processor/Processor.h"
#include "../QueryBuilder/QueryBuilder.h"

class SearchEngine {
private:
    std::string data_folder;
    ArticleTable *articles = nullptr;
    WordTree *wordTree = nullptr;
    std::mutex *wordTreeMutex = nullptr;

    void AvlCacheConsoleManager();

    void ArticleCacheConsoleManager();

    void QueryInterface();

public:
    Processor *processor = nullptr;
    QueryBuilder *query_builder = nullptr;

    /**
     * @param data_folder The folder containing the data files
     */
    explicit SearchEngine(std::string data_folder);

    /**
     * Populates the articles and the inverse index with the articles
     */
    void generateDataFromFiles();

    void generateAVLFromCache();

    void generateArticlesFromCache();

    int ConsolePrintEngineStats();

    void InitiateConsoleInterface();

    bool isIncomplete();

    bool isEmpty();

    ~SearchEngine();
};


#endif //INC_22S_FINAL_PROJ_SEARCHENGINE_H

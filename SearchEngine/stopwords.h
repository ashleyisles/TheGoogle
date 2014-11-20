#ifndef STOPWORDS_H
#define STOPWORDS_H


#include "document.h"
#include <fstream>
#include <vector>
class StopWords
{
private:
    //ifstream& input;
    vector<string> words_list;
public:
    StopWords();

    vector<string> get_stoplist(const string&);
    void remove_stops(Document&);

    ~StopWords();
};

#endif // STOPWORDS_H

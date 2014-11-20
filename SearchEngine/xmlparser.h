#ifndef XMLPARSER_H
#define XMLPARSER_H

#include "pugixml.hpp"
#include "document.h"
#include <iostream>
#include <locale>
//#include <fstream>

using namespace pugi;

class XMLParser
{
private:
    string title, text, contributor, file_name, timestamp, word;
public:
    XMLParser(const string&);

    void set_name(const string&);
    void parse_file();
    ~XMLParser();
};

#endif // XMLPARSER_H

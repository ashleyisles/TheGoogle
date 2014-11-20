#ifndef DOCUMENT_H
#define DOCUMENT_H


#include <string>
#include <vector>

using namespace std;

class Document
{
    class Page
    {
    private:
        string text;
    public:
        Page(string content) : text(content) {}
    };

private:
    string title, timestamp, text, contributor;
public:
    Document();

    string get_title();
    string get_contributor();
    string get_text();
    string get_timestamp();

    void set_contributor(string&);
    void set_title(string&);
    void set_timestamp(string&);
    void set_text(string&);

    ~Document();
};

#endif // DOCUMENT_H

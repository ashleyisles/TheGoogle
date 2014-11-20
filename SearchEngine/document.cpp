#include "document.h"

Document::Document()
{
    //constructor
}

string Document::get_title()
{
    return title;
}

string Document::get_contributor()
{
    return contributor;
}

string Document::get_timestamp()
{
    return timestamp;
}

string Document::get_text()
{
    return text;
}

void Document::set_title(string& title)
{
    this->title = title;
}

void Document::set_timestamp(string& timestamp)
{
    this->timestamp = timestamp;
}

void Document::set_text(string& text)
{
    this->text = text;
}

void Document::set_contributor(string& contributor)
{
    this->contributor = contributor;
}

//Document Document::operator++(int)
//{
//    // Create a temporary variable with our current digit
//    Document temp();

//    // Use prefix operator to increment this digit
//    ++(*this);             // apply operator

//    // return temporary result
//    return cResult;       // return saved state
//}

Document::~Document()
{
    //destructor
}

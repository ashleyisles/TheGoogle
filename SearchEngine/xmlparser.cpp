#include "xmlparser.h"

XMLParser::XMLParser(const string& input_name)
{
    set_name(input_name);
}

void XMLParser::set_name(const string& input_name)
{
    file_name = input_name;
}

void XMLParser::parse_file()
{
    xml_document doc;
    xml_parse_result result = doc.load_file(file_name.c_str());
    locale loc;

    cout << file_name << endl;
    if(!result)
    {
        cerr << "File not found." << endl;
        return;
    }

    Document* doc_ptr = new Document;
    vector<Document*> doc_list;
    int i = 0, count = 0;

    xml_node beginning = doc.child("mediawiki");
    for(xml_node first_node = beginning.first_child(); first_node; first_node = first_node.next_sibling())
    {
        if(first_node.value())
        {
            title = first_node.child_value("title");
            doc_ptr -> set_title(title);
        }

        if(first_node.child("revision"))
        {
            for(xml_node inner_node = first_node.first_child(); inner_node; inner_node = inner_node.next_sibling())
            {
                if(inner_node.child("timestamp"))
                {
                    timestamp = inner_node.child_value("timestamp");
                    doc_ptr -> set_timestamp(timestamp);
                }

                if(inner_node.child("contributor"))
                {
                    for(xml_node inside_node = inner_node.first_child(); inside_node; inside_node = inside_node.next_sibling())
                    {
                        if(inside_node.child("username"))
                        {
                            contributor = inside_node.child_value("username");
                            doc_ptr -> set_contributor(contributor);
                        }
                    }
                }

                if(inner_node.child("text"))
                {
                    text = inner_node.child_value("text");
                    doc_ptr -> set_text(text);
                    for(int i = 0; i < text.size(); i++)
                    {
                        if(isalpha(text[i],loc))
                            cout << text[i] << " ";
                    }
                }
            }
        }

        doc_list.push_back(doc_ptr);
        cout << "\nDocument Title: " << doc_list[i] -> get_title() << "\nContributor: " << doc_list[i] -> get_contributor() << "\nTimestamp: " << doc_list[i] -> get_timestamp() << "\nText: " << doc_list[i] -> get_text() << endl << endl;
        count++;

    }
    cout << "Total Number of Documents: " << count << endl;
}

XMLParser::~XMLParser()
{

}

#include "xmlparser.h"

int main(int argc, char *argv[])
{

    XMLParser parse_document(argv[1]);
    parse_document.parse_file();

    return 0;

}


















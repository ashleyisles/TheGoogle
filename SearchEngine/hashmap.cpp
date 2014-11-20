#include "hashmap.h"

HashMap::HashMap()
{
//    table = new HashEntry*[table_size];
//    for(int i = 0; i < table_size; i++)
//        table[i] = NULL;
}

//int HashMap::get(int key)
//{
//    int hash = (key % table_size);
//    while(table[hash] != NULL && table[hash] -> getKey() != key)
//        hash = (hash + 1) % table_size;
//    if(table[hash] == NULL)
//        return -1;
//    else
//        return table[hash] -> getValue();
//}

//void HashMap::put(int key, int value)
//{
//    int hash = (key % table_size);
//    while(table[hash] != NULL && table[hash] -> getKey() != key)
//        hash = (hash + 1) % table_size;
//    if(table[hash] != NULL)
//        delete = table[hash];
//    table[hash] = new HashEntry(key, value);
//}

//HashMap::~HashMap()
//{
//    for(int i = 0; i < table_size; i++)
//        if(table[i] != NULL)
//            delete table[i];
//    delete[] table;
//}

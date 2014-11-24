#ifndef AVLNODE_H
#define AVLNODE_H

#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

class AVLNode
{
    friend class AVLIndex;
private:
    AVLNode* left;
    AVLNode* right;

    char* word;
    int height;
    int* Ids;


public:
    AVLNode(char* word, int ID);
    AVLNode(int ID);
    AVLNode* addID(AVLNode* &node, int ID);
    void IncreaseArraySize(AVLNode* &node, int i);

    ~AVLNode();
};

#endif // AVLNODE_H

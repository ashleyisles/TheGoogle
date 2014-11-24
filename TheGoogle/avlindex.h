#ifndef AVLINDEX_H
#define AVLINDEX_H

#include "avlnode.h"

class AVLIndex
{
    friend class AVLNode;
private:

public:
    AVLNode* head;
    AVLIndex();

    AVLNode* insertWord(char*, int);
    AVLNode* insertWord(AVLNode* &, char*, int);
    int height(AVLNode*);
    AVLNode* rotateLeftOnce(AVLNode*);
    AVLNode* rotateLeftTwice(AVLNode*);
    AVLNode* rotateRightOnce(AVLNode*);
    AVLNode* rotateRightTwice(AVLNode*);
    void print(AVLNode*);

    ~AVLIndex();
};

#endif // AVLINDEX_H

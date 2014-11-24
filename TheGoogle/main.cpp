#include "avlindex.h"

int main()
{
    AVLIndex AVL;

    AVL.insertWord("hi", 3);
    cout << "HI" << endl;
    AVL.insertWord("Ashley", 2);
    cout << "HI" << endl;
    AVL.insertWord("chips", 3);
    cout << "HI" << endl;
    AVL.insertWord("lame", 5);
    cout << "HI" << endl;
    AVL.insertWord("lame", 7);
    AVL.insertWord("lame", 1);
    AVL.insertWord("lame", 2);
    AVL.insertWord("lame", 3);
    AVL.insertWord("lame", 4);
    AVL.insertWord("lame", 6);
    AVL.insertWord("lame", 8);
    AVL.insertWord("lame", 9);
    AVL.insertWord("lame", 10);
    AVL.insertWord("lame", 11);
    AVL.insertWord("lame", 7);
    cout << "HI" << endl;
    AVL.insertWord("jaguar", 1);
    cout << "HI" << endl;
    AVL.insertWord("panda", 4);
    cout << "HI" << endl;
    AVL.print(AVL.head);
    return 0;
}


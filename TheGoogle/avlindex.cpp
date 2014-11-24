#include "avlindex.h"

AVLIndex::AVLIndex()
{
    head = NULL;
}

//void AVLIndex::insertWord(string nextWord, int ID) {

//    AVLNode* cur = head;

//    //Empty list
//    if(cur == NULL) {

//        AVLNode* temp = new AVLNode(nextWord, ID);
//        head = temp;
//        return;
//    }

//    if (cur->left == NULL && nextWord < cur->word) {

//        cur->left = new AVLNode(nextWord, ID);
//        cur->heightL += 1;
//        return;
//    }

//    if (cur->right == NULL && nextWord > cur->word) {

//        cur->right = new AVLNode(nextWord, ID);
//        cur->heightR += 1;
//        return;

//    }

//    else {

//        while (cur->left != NULL || cur->right != NULL) {

//            if (nextWord < cur->word && cur->left != NULL) {

//                cur->heightL += 1;
//                if (cur->heightL > cur->heightR + 1) {

//                    //rotateRight(cur);
//                }

//                cur = cur->left;

//                if (cur->left == NULL) {

//                    cur->left = new AVLNode(nextWord, ID);
//                    return;
//                }
//            }

//            if (nextWord > cur->word && cur->right != NULL) {

//                cur->heightR += 1;
//                if (cur->heightR > cur->heightL + 1) {

//                    //rotateLeft(cur);
//                }
//                cur = cur->right;

//                if (cur->right == NULL) {

//                    cur->right = new AVLNode(nextWord, ID);
//                    return;
//                }
//            }
//        }
//    }
//}

AVLNode* AVLIndex::insertWord(char* nextWord, int ID) {

    if (head == NULL) {

        return (head = new AVLNode(nextWord, ID));
    }

    else {

        return insertWord(head, nextWord, ID);
    }
}

AVLNode* AVLIndex::insertWord(AVLNode* &cur, char* nextWord, int ID) {


    if (cur == NULL) {

        cur = new AVLNode(nextWord, ID);
        return cur;
    }

    int result = strcmp(nextWord, cur->word);

    if (result == 0) {

        cur->addID(cur, ID);
    }

    else if (result < 0) {

        cur->left = insertWord(cur->left, nextWord, ID);

        if (height(cur->left) - height(cur->right) == 2) {

            int result2 = strcmp(nextWord, cur->left->word);
            if (result2 < 0) {

                cur = rotateLeftOnce(cur);
            }

            else {

                cur = rotateLeftTwice(cur);
            }
        }
    }

    else if (result > 0) {

        cur->right = insertWord(cur->right, nextWord, ID);

        if (height(cur->right) - height(cur->left) == 2) {

            int result3 = strcmp(nextWord, cur->right->word);
            if (result3 > 0) {

                cur = rotateRightOnce(cur);
            }

            else {

                cur = rotateRightTwice(cur);
            }
        }
    }

    cur->height = max(height(cur->left), height(cur->right)) + 1;
    return cur;
}

int AVLIndex::height(AVLNode* curNode) {

    int left, right;

    if(curNode == NULL) {

        return 0;
    }

    left = height(curNode->left);
    right = height(curNode->right);

    if (left > right) {

        return left + 1;
    }

    else {

        return right + 1;
    }
}

AVLNode* AVLIndex::rotateLeftOnce(AVLNode* x) {

    AVLNode* y;

    y = x->left;
    x->left = y->right;
    y->right = x;
    x->height = max(height(x->left), height(x->right) ) + 1;
    y->height = max(height(y->left), x->height) + 1;
    if (head == x) {

        head = y;
    }
    return y;


}

AVLNode* AVLIndex::rotateLeftTwice(AVLNode* x) {

    x->left = rotateRightOnce(x->left);
    return rotateLeftOnce(x);
}

AVLNode* AVLIndex::rotateRightOnce(AVLNode* x) {

    AVLNode* y;

    y = x->right;
    x->right = y->left;
    y->left = x;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->right), x->height) + 1;
    if (head == x) {

        head = y;
    }
    return y;

}

AVLNode* AVLIndex::rotateRightTwice(AVLNode* x) {

    x->right = rotateLeftOnce(x->right);
    return rotateRightOnce(x);
}

void AVLIndex::print(AVLNode* node) {

    if(node != NULL) {

        print(node->left);
        cout << node->word << ": ";
        for (int i = 0; node->Ids[i] != 0; i++) {

            if (i == 0) {

                cout << node->Ids[i];
            }
            else {
                cout << ", " << node->Ids[i];
            }
        }
        cout << endl;
        print(node->right);
    }
}

AVLIndex::~AVLIndex() {

}

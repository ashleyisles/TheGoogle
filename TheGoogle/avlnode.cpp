#include "avlnode.h"

AVLNode::AVLNode(char* word, int ID) {

    this->word = word;
    this->left = NULL;
    this->right = NULL;
    this->height = 0;
    this->Ids = new int[10];
    this->Ids[0] = ID;

    for (int i = 1; i < 10; i++) {
        this->Ids[i] = 0;
    }


//    if (this->Ids == NULL) {

//        this->Ids = new AVLListID(ID);
//        return;
//    }

//    while (this->Ids->down != NULL) {

//        this->Ids = this->Ids->down;
//    }

//    this->Ids = this->Ids->down;
//    this->Ids = new AVLListID(ID);
}

AVLNode::AVLNode(int ID) {


}

AVLNode* AVLNode::addID(AVLNode* &node, int ID) {

    cout << "hi" << endl;
    int i = 0;
    while (node->Ids[i] != 0) {

        i += 1;
        if (node->Ids[i] == ID) {
            return node;
        }
    }

    if (node->Ids[i] == 0 && node->Ids[i + 1] != 0) {

        node->IncreaseArraySize(node, i);
    }

    node->Ids[i] = ID;
    return node;
}

void AVLNode::IncreaseArraySize(AVLNode* &node, int i) {

    int* temp = new int[i];

    for (int j = 0; j < i; j++) {

        temp[j] = node->Ids[j];
    }

    delete[] node->Ids;
    node->Ids = new int[i + 12];

    for (int j = 0; j < i; j++) {

        node->Ids[j] = temp[j];
    }

    for (int j = i + 1; j < i + 12; j++) {

        node->Ids[j] = 0;
    }

    delete[] temp;
}

AVLNode::~AVLNode() {

}

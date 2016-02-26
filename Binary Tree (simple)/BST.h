#ifndef BST_H
#define BST_H

class BST
{
public:
    BST();
    void addLeaf(int data);
    void printInOrder();

private:
    struct node //base of tress. one to hold value 2 pointers to point
    {
        int data;
        node* left;
        node* right;
    };

    node* root;
    node* createLeaf(int data);
    void addLeafPrivate(int data, node* nodePtr);
    void printInOrderPrivate(node* nodePtr);
};

#endif

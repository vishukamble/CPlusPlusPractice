#ifndef BST_H
#define BST_H

class BST
{
public:
    BST();
    ~BST();
    void addLeaf(int data);
    void printInOrder();
    int returnRootData();
    void printChildren(int data);
    int findSmallestData();
    void removeRootMatch();
    void removeNode(int data);
	void printThree();

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
    node* returnNode(int data);
    node* returnNodePrivate(int data, node* nodePtr);
    int findSmallestPrivate(node* nodePtr);
    void removeNodePrivate(int data, node* parent);
    void removeMatch(node* parent, node* match, bool);
    void removeSubTree(node* nodePtr);
	void inOrder(node*root);
	void preOrder(node*root);
	void postOrder(node*root);
};

#endif

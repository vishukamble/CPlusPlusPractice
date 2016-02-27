#include <iostream>
#include <cstdlib>
#include "BST.h"

using namespace std;

 BST::BST()
 {
     root = NULL; //new tree. Make sure root is null
 }

 BST::node* BST::createLeaf(int data)
 {
     node* n = new node; //creating a new node
     n->data = data;  //the parent should be hold the key value which is data
     n->left = NULL; //left pointer should be null
     n->right = NULL; //right pointer should be null;

    return n;
 }

 void BST::addLeafPrivate(int data, node* nodePtr)
 {
     if(root == NULL) //if there is no tree, create a root node
     {
         root = createLeaf(data);
     } else if (data < nodePtr->data) //if data is smaller, add to left side
     {
        if(nodePtr->left != NULL) //if left node already has data, recursively go and find empty left node
        {
            addLeafPrivate(data, nodePtr->left); //recursive call
        } else //if left node is empty
        {
            nodePtr->left = createLeaf(data); //create a left node with data.
        }
     } else if (data > nodePtr->data) //if data is greater, add to right side
     {
        if(nodePtr->right != NULL) //if right node already has data, recursively go and find empty right node
        {
            addLeafPrivate(data, nodePtr->right); //recursive call
        } else //if right node is empty
        {
            nodePtr->right = createLeaf(data); //create a right node with data.
        }
     } else //if data is equal to node we're at (duplicate data)
     {
        cout<<"The data "<<data<<" is already in the tree!" << endl;
     }

 }

 void BST::addLeaf(int data)
 {
    addLeafPrivate(data, root); //send data and node to private function (which has access to private variables)
 }

 void BST::printInOrderPrivate(node* nodePtr) //printing the tree
 {
    if(root != NULL) //if tree is not empty
    {
        if(nodePtr->left != NULL) //if the left node exists which means we're not at the last left node
        {
            printInOrderPrivate(nodePtr->left); //recursively call until we get to the last left node
        }
        cout<<nodePtr->data <<" "; //print out the key
        if(nodePtr->right != NULL) //if the right node exists which means we're not at the last right node
        {
            printInOrderPrivate(nodePtr->right); //recursively call until we get to the last right node
        }
    } else
    {
        cout<<"Tree is empty!!!!\n\n"; //empty tree (if root == NULL)
    }

 }

 void BST::printInOrder() //public function to access private member of class
 {
     printInOrderPrivate(root); //call the private function
 }

 BST::node* BST::returnNodePrivate(int data, node* nodePtr) //take data and pointer
 {
     if(nodePtr != NULL) //if pointer exists
     {
        if(nodePtr->data == data) //check if data we're looking is present in the current pointer
            return nodePtr; //if it is, return that pointer
        else //if it is not look left and right
        {
            if(data < nodePtr->data) //data is on left side since it is less that current pointer's data
            {
                return returnNodePrivate(data, nodePtr->left); //recursively call function until we find the data
            } else
            {
                return returnNodePrivate(data, nodePtr->right); //recursively call function until we find the data
            }
        }
     } else
     {
         return NULL; //if nodePtr is null, return null
     }

 }

 BST::node* BST::returnNode(int data) //public function to access private members
 {
     return returnNodePrivate(data, root); //send data and root to private node function that has access to private members
 }

 int  BST::returnRootData() //return root data
 {
     if(root != NULL)
     {
        return root->data;
     } else
     {
         return -1;
     }
 }

 void BST::printChildren(int data)
 {
    node* nodePtr = returnNode(data);   //to check if the data is in out tree.
    //cout<<"Node ptr = "<<nodePtr<<endl; //for debugging
    if(nodePtr != NULL)  //if data is part of tree, search it
    {
        cout<<"Parent node= "<<nodePtr->data<<endl; //display parent node
        if(nodePtr->left == NULL) //if no child of parent
            cout<<"NULL"<<endl;
        else
            cout<<"Left child: "<<nodePtr->left->data<<endl; //print left child

        if(nodePtr->right == NULL) //if no right child
            cout<<"NULL"<<endl;
        else
            cout<<"Right child: "<<nodePtr->right->data<<endl; //print right child
    } else
    {
        cout<<"Data: "<<data<<" is not in the tree!\n"; //if nodePtr is null means data is not present in tree
    }
 }


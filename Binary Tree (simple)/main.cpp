/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 02/26/2016
Program: BInary trees
Desc:
*/

#include <iostream>
#include <cstdlib>
#include "BST.h"

using namespace std;

int main()
{
    int TreeKeys[16] = {50, 76, 21, 4, 32, 64, 15, 52, 14, 100, 83, 2, 3, 70, 87, 80};
    BST myTree;

    cout<<"Printing the tree inorder\nBefore adding numbers"<<endl;
    myTree.printInOrder();

    for(int i=0; i<16; i++)
    {
        myTree.addLeaf(TreeKeys[i]);
    }

    cout<<"Printing the tree inorder\After adding numbers"<<endl;
    myTree.printInOrder();

    return 0;
}


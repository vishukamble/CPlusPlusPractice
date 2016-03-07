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
    int opt = 0;

    cout<<"Printing the tree inorder\nBefore adding numbers"<<endl;
    myTree.printInOrder();

    for(int i=0; i<16; i++)
    {
        myTree.addLeaf(TreeKeys[i]);
    }

    cout<<"Printing the tree inorder\nAfter adding numbers"<<endl;
    myTree.printInOrder();

    cout<<"\n\nPrint Children"<<endl;
   // myTree.printChildren(TreeKeys[5]);
   // myTree.printChildren(myTree.returnRootData());

    /*for(int i=0; i<16; i++)
    {
        myTree.printChildren(TreeKeys[i]);
        cout<<endl;
    } */
    cout<< "Smallest value in tree is: " << myTree.findSmallestData() << endl;

    cout<<"\nEnter value to delete and enter -1 to stop "<<endl;;
    while(opt!=-1)
    {
        cout<<"Delete node!\n";
        cin>>opt;
        if(opt != -1)
        {
            cout<<endl;
            myTree.removeNode(opt);
            myTree.printInOrder();
            cout<<endl;
        }
    }
	cout << "Print trees: " << endl;
	cout << "InOrder: " << endl;
	myTree.printThree();
	system("pause");
    return 0;
}


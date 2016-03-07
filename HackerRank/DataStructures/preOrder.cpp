/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/6/2016
Program: Tree: Preorder Traversal
Desc: https://www.hackerrank.com/challenges/tree-preorder-traversal
*/
/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void Preorder(node *root) {
     if(root == NULL) 
         return; 
    cout<<root->data<<" "; 
    Preorder(root->left); 
    Preorder(root->right);

}

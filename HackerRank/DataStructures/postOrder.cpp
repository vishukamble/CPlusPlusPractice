/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/6/2016
Program: Tree: Postorder Traversal
Desc: https://www.hackerrank.com/challenges/tree-postorder-traversal
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
void Postorder(node *root) {
     if(root != NULL) 
        {
         Postorder(root->left);
         Postorder(root->right);
         cout<<root->data<<" ";
    } 
}
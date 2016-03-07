/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/6/2016
Program: Tree: Inorder Traversal
Desc: https://www.hackerrank.com/challenges/tree-inorder-traversal
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
void Inorder(node *root) {
 if(root != NULL) //if tree is not empty
    {
        if(root->left != NULL)
        {
            Inorder(root->left);
        }
        cout<<root->data <<" "; 
        if(root->right != NULL)
        {
            Inorder(root->right);
        }
    }
}

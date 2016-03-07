/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/6/2016
Program: Find Merge Point of Two Lists
Desc: https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists
*/

/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    int pos = 0;
    Node* temp;
    while (headA) {
        Node *tmp = headA->next;
        headA->next = NULL;
        headA = tmp;
    }

    while (headB) {
        if (headB->next == NULL) {
            return headB->data;
        }
        headB = headB->next;
    }
    return 0;
}/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node* temp;
    while(headA != NULL)
        {
        temp = headB;
        while(temp->next != NULL && temp->data!=headA->data)
            {
            temp = temp->next;
        }
        if(temp->data == headA->data)
            return temp->data;
        else
            headA = headA->next;
    }
    return 0;
}
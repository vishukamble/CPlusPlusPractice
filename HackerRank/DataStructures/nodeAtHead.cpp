/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/5/2016
Program: Insert a node at the head of a linked list
Desc: https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list
*/


/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node* n = new Node();
    n->data = data;
    if(head != NULL)
        {
        n->next = head;
    }
    head = n;
    return head;
}
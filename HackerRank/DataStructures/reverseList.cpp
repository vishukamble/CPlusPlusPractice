/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/5/2016
Program: Reverse a linked list
Desc: https://www.hackerrank.com/challenges/reverse-a-linked-list
*/
/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    Node *prev = NULL, *curr = NULL, *next = NULL;
    curr= head;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    // now let the head point at the last node (prev)
    head = prev;
    return head;
}

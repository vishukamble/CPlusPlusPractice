/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/5/2016
Program: Get Node Value
Desc: https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail
*/

/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
   int pos = 0;
    Node *curr = head;
    while(curr != NULL) //go until last node
        {
        curr = curr->next;
        ++pos;
    }
   pos--;  
   curr = head;  
   while(curr!=NULL){  
     if(pos == positionFromTail){  
       return curr->data;  
     }  
     pos--;  
     curr = curr->next;  
   }
    return 0;
}

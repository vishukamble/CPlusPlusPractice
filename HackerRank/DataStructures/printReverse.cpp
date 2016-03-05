/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/5/2016
Program: Print in Reverse
Desc: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/
*/

/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    if (head == NULL)
       return;
    ReversePrint(head->next);
    cout<<head->data <<endl;
}

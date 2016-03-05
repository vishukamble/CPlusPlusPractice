/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/5/2016
Program: Insert a Node at the Tail of a Linked List
Desc: https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
*/

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node* n = new Node();
    n->data = data;
    n->next = NULL;
    if(head == NULL)
        {
        head = n;
    } else
        {
        Node* temp = new Node();
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = n;
    }
    return head;
    
}

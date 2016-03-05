/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/5/2016
Program: Insert a node at a specific position in a linked list
Desc: https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
*/

/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node* n = new Node();
    Node* temp = new Node();
    Node* curr= new Node();
	n->data = data;
	int pos = 0;
	if (position == 0)
	{
		n->next = head;
		head = n;
	}
	else if (head != NULL)
	{
		temp = head; 
		curr = head;
		while (curr->next != NULL && pos != position)
		{
			temp = curr;
			curr = curr->next;
			++pos;
		}
		temp->next = n;
		n->next = curr;
	}
    return head;
}
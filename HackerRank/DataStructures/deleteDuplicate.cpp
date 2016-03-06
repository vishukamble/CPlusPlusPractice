/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/5/2016
Program: Delete duplicate-value nodes from a sorted linked list
Desc: https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/
*/
/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    Node* curr = head;
    Node* temp = head;
    Node* dup = NULL;
    while (curr != NULL && curr->next != NULL)
	{
		temp = curr;
		while (temp->next != NULL) 
		{
			if (curr->data == temp->next->data) 
			{
				dup = temp->next;
				if (temp->next != NULL) 
				{
					temp->next = temp->next->next;
				}
				free(dup);
			} else
			{
				temp = temp->next; 
			}
		}
		curr = curr->next; 
	}
    return head;
}
	

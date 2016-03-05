/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/5/2016
Program: Delete a Node
Desc: https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/
*/

/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
	Node* curr = new Node();
    curr=head;
    int pos = 0;
    if (pos == position) 
	{
		curr = head->next; 
		delete head; 
		head = curr; 
		
	} else //if element is in middle
	{
        Node* temp = new Node();
		temp = head;
		while (curr != NULL && pos != position) 
		{
			temp = curr;
			curr = curr->next;
            ++pos;
		}
	temp->next = curr->next; 
	delete curr;	
	}
    return head;
}
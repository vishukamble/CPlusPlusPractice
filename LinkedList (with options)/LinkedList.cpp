#include "LinekdList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
	curr = NULL;
}

void LinkedList::addData(int data)
{
	nodePtr n = new node(); //create new node and add data to that node
	n->next = NULL;
	n->data = data;
	 //traverse through the list
	if (head != NULL)
	{
		curr = head; //start from head
		while (curr->next != NULL) //go until last
		{
			curr = curr->next;
		}
		curr->next = n; //last node will now point to new node
	} else
	{
		head = n;
	}
}

void LinkedList::addDataMiddle(int pos, int data)
{
	nodePtr n = new node(); //create new node and add data to that node
	n->data = data;
	int position = 0;
	if (pos == 0) //if you wanna add at the front of the linkedlist
	{
		n->next = head;
		head = n;
	}
	else if (head != NULL)
	{
		temp = head; //temp pointer to stay behind curr, to add elements in middle (temp -> new -> current)
		curr = head; //start from head
		while (curr->next != NULL && position != pos) //go until last
		{
			temp = curr;
			curr = curr->next;
			++position;
		}
		temp->next = n;
		n->next = curr; //last node will now point to new node
	}
}

void LinkedList::deleteData(int data)
{
	nodePtr delPtr = NULL; //pointer to node we will delete
	curr = head; 
	if (head->data == data) //if data is in head itself
	{
		curr = head->next; //store 2nd node in current
		delete head; //delete the head node
		head = curr; //make head the second node
		cout << "Element: " << data << " was deleted!" << endl;
	} else //if element is in middle
	{
		temp = head; //temp pointer to stay behind curr (if node is in between)
		while (curr != NULL && curr->data != data) //traverse until you find data node
		{
			temp = curr;
			curr = curr->next;
		}
		if (curr == NULL) //if list is travelled and data is not found
		{
			cout << "Element: " << data << " not found!" << endl;
			delete delPtr; //delete pointer, cuz no garbage collection :'(
		} else
		{
			delPtr = curr; //del pointer is at the node with the data that we asked to delete
			curr = curr->next; //move current to next pointer
			temp->next = curr; //point the 'node to be deleted's' previous node to current 
			delete delPtr;
			cout << "Deleted element: " << data << " !!\n";
		}
	}
}

void LinkedList::printList()
{
	curr = head; //store head in curr to irerate
	int count = 0; //counter to help uer manipulate list
	while (curr != NULL) //traverse whole list
	{
		cout << count++ <<"\t"; //print index
		curr = curr->next; //move to next 
	}
	curr = head; //make current head again
	cout << endl;//go to next line
	while (curr != NULL) //traverse whole list
	{
		cout << curr->data << "\t"; //print data
		curr = curr->next; //move to next 
	}
	cout << endl;
}

void LinkedList::removeDuplicatePrivate(node* head)
{
	nodePtr curr, temp, dup;
	curr = head;

	while (curr != NULL && curr->next != NULL)
	{
		temp = curr; //we'll iterate through the loop with temp and keep curr constant
		while (temp->next != NULL) //do until last element
		{
			if (curr->data == temp->next->data) //check the next node's data
			{
				dup = temp->next;//store the duplicate element
				cout << "Duplicate item found: " << dup->data << endl; //print it
				if (temp->next != NULL) //if it is not thelast element (to avoid null pointer)
				{
					temp->next = temp->next->next; //skip duplicate (if it is last element this will give null pointer)
				}
				cout << "Deleted: " << dup->data << endl;
				free(dup);
			} else //make temp go to next node (curr will be same since we're checking with curr)
			{
				temp = temp->next; 
			}
		}
		curr = curr->next; //if all elements don't match, move curr to next and check all elements
	}
}
	

void LinkedList::removeDuplicate()
{
	removeDuplicatePrivate(head);
}
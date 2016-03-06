#pragma once
#ifndef LinkedList_H
#define LinkedList_H

class LinkedList
{
private:
	typedef struct node
	{
		int data;
		node* next;
	}* nodePtr;
	nodePtr curr;
	nodePtr head;
	nodePtr tail;
	nodePtr temp;
	void removeDuplicatePrivate(node* head);
	void printRecuresivePrivate(node* head);
	void printRecuresiveReversePrivate(node* head);

public:
	LinkedList();
	void addData(int data);
	void deleteData(int data);
	void printList();
	void addDataMiddle(int pos, int data);
	void removeDuplicate();
	void reverse();
	void printRecuresive();
};


#endif // !LinkedList_H

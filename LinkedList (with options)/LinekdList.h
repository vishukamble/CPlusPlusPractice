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

public:
	LinkedList();
	void addData(int data);
	void deleteData(int data);
	void printList();
	void addDataMiddle(int pos, int data);

};


#endif // !LinkedList_H

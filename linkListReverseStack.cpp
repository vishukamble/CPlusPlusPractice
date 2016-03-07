/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/6/2016
Program: ReverseListStack
Desc: Print linkedlist in reverse using stack
*/

#include <iostream>
using namespace std;
#include <stack>

class LinkedList
{
	typedef struct node
	{
		char data;
		node* next;
	}*nodePtr;
	nodePtr head;
	nodePtr curr;
	nodePtr tail;
	stack<char> stk;
public:
	LinkedList();
	void add(char a);
	void print();
	void putIntoStack();
};

void LinkedList::putIntoStack()
{
	curr = head;
	while (curr != NULL)
	{
		stk.push(curr->data);
		curr = curr->next;
	}
	cout << endl;
	cout << "Stack elements are: " << endl;
	while (!stk.empty())
	{
		cout << stk.top() << "\t";
		stk.pop();
	}
	cout << endl;
}



LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
	curr = NULL;
}

void LinkedList::add(char a)
{
	nodePtr n = new node();
	nodePtr curr = head;
	n->data = a;
	n->next = NULL;
	if (head == NULL)
		head = n;
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = n;
	}
}

void LinkedList::print()
{
	curr = head;
	while (curr != NULL)
	{
		cout << curr->data << "\t";
		curr = curr->next;
	}
	cout << endl;
}


int main()
{
	LinkedList obj;
	obj.add('a');
	obj.add('b');
	obj.add('c');
	obj.print();
	obj.putIntoStack();
	system("pause");
	return 0;
}


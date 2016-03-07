/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/6/2016
Program: Detect Cycle in linkedlist
Desc: Program to detect if there's a never ending loop in linked list
*/
#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

int main()
{
	struct node *head = NULL;
	struct node *temp[7];
	int tort = 0;
	for (int i = 0;i<7;i++)
	{
		temp[i] = (node *)malloc(sizeof(node));
	}
	temp[0]->data = 32;
	temp[0]->next = temp[1];
	temp[1]->data = 12;
	temp[1]->next = temp[2];
	temp[2]->data = 1;
	temp[2]->next = temp[3];
	temp[3]->data = 43;
	temp[3]->next = temp[4];
	temp[4]->data = 7;
	temp[4]->next = temp[2]; //making cycle
	head = temp[0];
	node* tortoise = head;
	node* hare = head;
	
	while (hare->next != NULL)
	{
		hare = hare->next->next;  
		tortoise = tortoise->next;
		++tort;
		if (hare == tortoise)		//0, 1, 2, 3, 4							
		{							//4, 6, 7, 1, 9
			cout << "Cycle detected at ";
			cout << tort << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
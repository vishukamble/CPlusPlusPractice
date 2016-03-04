#include "hash.h"
#include <iostream>
#include <string>
using namespace std;

hashClass::hashClass()
{
	for (int i = 0; i < tableSize; i++)
	{ //create a new item  and point its next to null (to make it last item)
		HashTable[i] = new item;
		HashTable[i]->name = "empty";
		HashTable[i]->drink = "empty";
		HashTable[i]->next = NULL;
	}
}
//function to add item
int hashClass::Hash(string key)
{
	int hash = 0;
	int index;
	for (int i = 0; i < key.length(); i++)
	{
		hash += (int)key[i]; //create index
		//cout << "hash = " << hash << endl;
	}
	index = hash % tableSize; //%10 just to keep index within 10 values
	return index;
}

void hashClass::addItem(string name, string drink)
{
	int index = Hash(name);  //new index
	if (HashTable[index]->name == "empty") //if empty index
	{
		HashTable[index]->name = name; //assign new index to name
		HashTable[index]->drink = drink; //assign new index to drink
	} else
	{
		item* ptr = HashTable[index]; //create pointer
		item* n = new item; //create new node
		n->name = name; //assign name and drink to node
		n->drink = drink;
		n->next = NULL; //point next to null
		while (ptr->next != NULL) //iterate till alst
		{
			ptr = ptr->next;
		} 
		ptr->next = n; //add new node to last value
	}
}

int hashClass::numItemsIndex(int index)
{
	int count = 0; 
	if (HashTable[index]->name == "empty") //if empty space
		return count; //return 0
	else
	{
		count++;
		item* ptr = HashTable[index]; //create new pointer for that key
		while (ptr->next != NULL)//iterate through loop
		{
			count++;
			printItemsInIndex(count);//print it
			ptr = ptr->next;//move to next pointer
		}
	}
	return count;
}

void hashClass::printTable()
{
	int num;
	for (int i = 0; i < tableSize; i++)
	{
		num = numItemsIndex(i);
		if (num > 0) //print indexes where key is stored
		{
			cout << "---------------------" << endl;
			cout << "Index: " << i << endl; //print the index and its vlaue
			cout << HashTable[i]->name << "\t" << HashTable[i]->drink << endl;
			cout << "# of items: " << num << endl; //print number of items in that index
			if (num > 1) //if more than 1 item, print that too
				printItemsInIndex(i);
			cout << "---------------------" << endl;
		}
	}
	cout << "Do you want to see empty indexes? Y for yes, N for no! "; //show empty index
	char an;
	cin >> an;
	if (an == 'Y' || an == 'y')
	{
		for (int i = 0; i < tableSize; i++)
		{
			num = numItemsIndex(i);
			if (num == 0)
			{
				cout << "---------------------" << endl;
				cout << "Index: " << i << "\nempty\tempty" << endl; //print the index and its vlaue
				cout << "# of items: " << num << endl; //print number of items in that index
				cout << "---------------------" << endl;
			}
		}
	}
}

void hashClass::printItemsInIndex(int num)
{
	item* ptr = HashTable[num]; //new pointer at that number
	if (ptr->name == "empty") //if empty show it is empty
		cout << "Index " << num << " is empty!" << endl;
	else
	{
		cout << "Index " << num << " has following values: " << endl;
		while (ptr != NULL) //go deep down
		{
			cout << "---------------------" << endl;
			cout << ptr->name << "\t" << ptr->drink << endl;
			cout << "---------------------" << endl;
			ptr = ptr->next;
		}
	}
}

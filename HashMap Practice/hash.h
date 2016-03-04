#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef  Hash_H
#define Hash_H

class hashClass
{
public:
	hashClass();
	int Hash(string key);
	void addItem(string name, string drink);
	int numItemsIndex(int index);
	void printTable();
	void printItemsInIndex(int num);	

private: 
	static const int tableSize = 40;
	struct item
	{
		string name;
		string drink;
		item* next;
	};

	item* HashTable[tableSize];
};


#endif // ! Hash_H

/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/3/2016
Program: HashMap practice
Desc:
*/

#include <map>
#include <unordered_map>
#include <iostream>
#include <string>
#include "hash.h"
using namespace std;

int main()
{
	hashClass hObj;
	string name, drink = "";
	int values;
	cout << "Enter how many names you want to store: ";
	cin >> values;
	for (int i = 0; i < values; i++)
	{
		name = drink = "";
		cout << "\nEnter name: ";
		cin >> name;
		cout << "Enter " << name << "'s favorite drink: ";
		cin >> drink;
		hObj.addItem(name, drink);
	}
	cout << endl;
	hObj.printTable();
	system("pause");
	return 0;
}

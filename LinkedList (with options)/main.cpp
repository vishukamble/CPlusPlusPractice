#include "LinekdList.h"
#include <iostream>
using namespace std;

int main()
{
	LinkedList list;
	int numElements, num, opt, x , pos, del;
	char ans = 'y';
	bool flag = false;
	cout << "Enter number of elements you want in linked list: ";
	cin >> numElements; flag = true;
	for (int i = 0; i < numElements; i++)
	{
		cout << "Enter element at index: "<<i<< ": ";
		cin >> x;
		list.addData(x);
	}
	while (ans == 'y')
	{
		cout << "\nWhat do you wanna do?\n1. Add an element in middle (position, data)\n2. Delete elements\n3. Print elements\n";
		cin >> opt;
		switch (opt)
		{
		case 1:
			cout << "\nEnter position and data in which you want to add: ";
			cin >> pos >> num;
			list.addDataMiddle(pos, num);
			list.printList();
			break;
		case 2:
			cout << "\nHere is the list. Refer this list while deleting: ";
			list.printList();
			cout << "\nEnter data you want to delete: ";
			cin >> num;
			list.deleteData(num);
			break;
		case 3:
			list.printList();
			break;
		default:
			cout << "\nPlease select from the options! " << endl;
			break;
		}
		cout << "Do you want to do any more operations or exit?\nPress 'y' to continue or 'n' to exit: ";
		cin >> ans;
	}
	system("pause");
	return 0;
}
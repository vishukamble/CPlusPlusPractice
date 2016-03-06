#include "LinekdList.h"
#include <iostream>
using namespace std;

int main()
{
	LinkedList list;
	int numElements, num, opt, x , pos;
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
		cout << "\nWhat do you wanna do?\n1. Add an element in middle\n2. Delete elements\n3. "<<
			"Print elements\n4. Check duplicate data\n5. Reverse the List\n6. Print Recursive" << endl;
		cin >> opt;
		switch (opt)
		{
		case 1:
			cout << "\nHere is the list. Refer this list while adding:\n";
			list.printList();
			cout << "\nEnter position and data in which you want to add: ";
			cin >> pos >> num;
			list.addDataMiddle(pos, num);
			list.printList();
			num = 0; pos = 0;
			break;
		case 2:
			cout << "\nHere is the list. Refer this list while deleting:\n";
			list.printList();
			cout << "Enter data you want to delete: ";
			cin >> num;
			list.deleteData(num);
			list.printList();
			break;
		case 3:
			list.printList();
			break;
		case 4:
			list.printList();
			list.removeDuplicate();
			cout << "List is now: " << endl;
			list.printList();
		case 5:
			list.printList();
			list.reverse();
			break;
		case 6: 
			list.printList();
			list.printRecuresive();
			break;
		default:
			cout << "\nPlease select from the options! " << endl;
			break;
		}
		cout << "\nDo you want to do any more operations or exit?\nPress 'y' to continue or 'n' to exit: ";
		cin >> ans;
	}
	system("pause");
	return 0;
}
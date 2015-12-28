/*
Author: Vishwanath Kamble
Practice Session C++ Program No.
Website: www.geekstarts.info , www.vishukamble.info

Program: InsertionSort
Desc: A program that sorts a given array  :)
*/

#include <iostream> //using iostream header file

using namespace std; //using std for cin, cout and endl

int main()
{
	int a[6],temp;
	cout << "A program that sorts a given array using insertion sort technique." << endl;
	cout << "Enter any 7 numbers: " << endl;

	for (int i = 0; i < 7; i++)
		cin >> a[i];

	for (int i = 0; i < 7; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (a[j] > a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
			else
				break;
		}
			
	}
	cout << "\n";
	for (int i = 0; i < 7; i++)
		cout << a[i]<<endl;

	system("pause"); //Pause the screen to view output
	return 0; //return an int value for int main()
}
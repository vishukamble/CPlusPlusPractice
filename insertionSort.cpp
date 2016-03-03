/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/2/2016
Program: Insertion sort
Desc: A simple sorting program with insertion sort
*/

#include <iostream>
using namespace std;

int main()
{
	int *arr, num, temp, j;
	cout << "Enter number of elements in array: ";
	cin >> num;
	arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= num - 1; i++)
	{
		temp = arr[i];
		j = i;
		while (j > 0 && arr[j - 1] > temp)
		{
			arr[j] = arr[j - 1];
			j = j - 1;
		}
		arr[j] = temp;
	}
	cout << "\nSorted list: " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	return 0;
}

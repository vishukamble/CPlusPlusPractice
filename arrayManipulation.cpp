/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Array manipulation
Desc:
*/

#include <iostream>
using namespace std;

int main()
{
    int main()
{
	int arr[] = { 0, 1,5,0,0,5,0,7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int nonzero = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] != 0)
			nonzero++;
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] == 0 && arr[j] != 0)
			{
				arr[i] = arr[j];
				arr[j] = 0;
				nonzero--;
			} 
		}
		if (nonzero == 0)
			break;
	}

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

}

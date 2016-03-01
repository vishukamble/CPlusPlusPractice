/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/1/2016
Program: Find Digits
Desc: https://www.hackerrank.com/challenges/find-digits
*/

#include <iostream>
using namespace std;

int main()
{
	int test, count;
	cin >> test;
	int temp, num;
	for (int i = 0; i < test;i++)
	{
		count = 0;
		cin >> num;
		temp = num;
		while (temp != 0)
		{
			int rem = temp % 10;
			if (rem != 0)
			{
				if (num % rem == 0)
					count++;
			}
			temp /= 10;

		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}

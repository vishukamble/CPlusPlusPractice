/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 2/27/2016
Program: Utopian Tree
Desc:https://www.hackerrank.com/challenges/utopian-tree
*/

#include <iostream>
using namespace std;

int height(int n)
{
	int h = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
			h *= 2;
		if (i % 2 == 0)
			h++;
	}
	return h;
}

int main()
{
	int input, n;
	cin >> input;
	for (int i = 1; i <= input; i++)
	{
		cin >> n;
		cout << height(n) << endl;
	}
	return 0;
}

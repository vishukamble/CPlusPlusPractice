
/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: gameOfThrones.cpp
Desc: https://www.hackerrank.com/challenges/game-of-thrones
*/

#include <iostream>
using namespace std;

int arr[26];

int main()
{
    string str;
	cin >> str;
	for (int i = 0; i < (int)str.size(); i++)
		arr[str[i] - 'a']++;
	int even = 0, odd = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] % 2 == 0)
            even++;
		else
            odd++;
	}
	if (odd <= 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


    return 0;
}

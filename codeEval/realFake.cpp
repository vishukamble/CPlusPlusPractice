/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/9/2016
Program: Real or Fake
Desc: Check if credit card number is real or fake https://www.codeeval.com/open_challenges/227/
*/
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int ans = 0;
	string str = "";
	int doub = 0, not_doub = 0;
	double cc[16];
	cout << "Enter credit card number: ";
	cin >> str; //store credit card number in string
	for (int i = 0; i < str.length(); i++)
	{
		cc[i] = str.at(i) - '0'; //convert string to int values and put it in double array
	}
	for (int i = 0; i < 16; i++)
	{
		if (i % 2 == 0) //for every second number add it to next second number
			doub += cc[i];
		else //add remining numbers with each other
			not_doub += cc[i];
	}
	ans = doub + not_doub; //add them and check mod 10
	if (ans % 10 == 0)
		cout << "Real" << endl;
	else
		cout << "Not Real" << endl;
	return 0;
}

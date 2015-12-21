/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: To find number of characters in word in a line.
Desc:
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string str;

	ifstream infile("vishu.txt"); //Opening file
	if (infile.is_open())
		cout << "Input file 'input.txt' is open." << endl;

	while (!infile.eof()) //While file is not empty continue reading
	{
		infile >> str; //Read a character and store it in str variable
		cout<<"Counting characters in: "<<str<<endl;
		cout<<"Number of characters: "<<str.length();
		cout<<"\n"<<endl;
	}
    return 0;
}

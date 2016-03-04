/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/3/2016
Program: HashMap practice
Desc:
*/
#include <string>
#include <map>
#include <unordered_map>
#include <iostream>
using namespace std;

int main()
{
	map<string, int> hashMap;
	string str;
	int num;
	cin >> str >> num;
	hashMap[str] = num;
	cout << "Hashmap: " << hashMap[str];
	return 0;
}

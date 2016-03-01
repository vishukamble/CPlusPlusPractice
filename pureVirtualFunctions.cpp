/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 2/27/2016
Program: Pure virtual functions
Desc:
*/

#include <iostream>
using namespace std;

class Animal
{
public: virtual void talk() = 0;
};

class Dog : public Animal
{
public:
	virtual void talk()
	{
		cout << "Bow wow! Bow wow! " << endl;
	}
};

class Cat : public Animal
{
public:
	virtual void talk()
	{
		cout << "Meow meow " << endl;
	}
};

int main()
{
	Dog d1;
	Cat c1;
	d1.talk();
	c1.talk();
	system("pause");
	return 0;
}

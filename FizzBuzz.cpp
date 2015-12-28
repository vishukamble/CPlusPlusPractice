/*
Author: Vishwanath Kamble
Practice Session C++ Program No.
Website: www.geekstarts.info , www.vishukamble.info

Program: FizzBuzz
Desc: A program that asks user to input two numbers and
prints "Fizz" instead of numbers divisible by 3 
prints "Buzz" instead of numbers divisible by 5
prints "FizzBuzz" instead of numbers divisible by 15:)
*/

#include <iostream> //using iostream header file

using namespace std; //using std for cin, cout and endl

int main()
{
	int num1, num2;
	cout << "This program will display ""Fizz"" instead of numbers divisible by 3"
		<< "\ndisplay ""Buzz"" instead of numbers divisible by 5 and "<<
		"\ndisplay ""FizzBuzz"" instead of numbers divisible by 15 between two numbers: " << endl; //Aim of program
	cout << "Please enter first number: " << endl; //Ask user for number 1
	cin >> num1;
	cout << "Please enter second number: " << endl; //Ask user for number 2
	cin >> num2;
	for (int i = num1; i < num2; i++) //For loop to iternate between number 1 and number 2
	{
		if (i % 15 == 0) //If number is divisible by 15 print FizzBuzz
			cout << "FizzBuzz" << endl;

		else if (i % 3 == 0) //If number is divisible by 3 print Fizz
			cout << "Fizz" << endl;

		else if (i % 5 == 0) //If number is divisible by 5 print Buzz
			cout << "Buzz" << endl;
		else
			cout << i << endl; //Or else print the number
	}

	system("pause"); //Pause the screen to view output
	return 0;
}
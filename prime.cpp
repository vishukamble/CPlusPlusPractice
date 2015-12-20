/*
Author Vishu
Date: 12/19/2015
Program: Take a number and check if it is prime.
*/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, count = 0;
	cout << "This program will display all prime numbers between two numbers: " << endl; //Aim of program
	cout << "Please enter first number: " << endl; //Ask user for 1st number
	cin >> num1;
	cout << "Please enter second number: " << endl; //Ask user for 2nd number
	cin >> num2;
	cout << "Prime numbers between " << num1 << " and " << num2 << " are: " << endl;
	for (int i = num1; i <= num2; i++) // for loop from number 1 to number 2
	{
		bool prime = true; //using boolean to find out prime numbers
		for (int j = 2; j*j <= i; j++) //for loop to check factors
		{
			if (i % j == 0) //if number 1 is completely divisible by an integer
			{
 				prime = false; //set bool variable to false and end loop. Move to next number
				break;
			}
		}
		if (prime) cout << i <<endl; //If number is not divisible by any integer, print it.
	}
    return 0;
}

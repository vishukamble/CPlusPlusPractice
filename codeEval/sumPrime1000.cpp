/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 3/9/2016
Program: 1000 prime sum
Desc: Sum of first 1000 prime numbers (not 1 - 1000) https://www.codeeval.com/browse/4/
*/
#include <iostream>

using namespace std;
int main()
{
	int ans = 0;
	int count = 0, i =1;
	while (count < 1001) //while count of prime numbers is less than 1000
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
		if (prime)
		{
			count++; //prime number found, increment count
			ans += i; //add it to answer
		}
		++i; //check for next number
	}
	cout << ans << endl; //display ans
	return 0;
}

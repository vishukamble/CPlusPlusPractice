/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: templateExample
Desc: a program to demonstrate use of templates in C++
*/

#include <iostream>
using namespace std;

//Template declaration
template<typename T>
void swap(int &x, int &y)
{   //code to swap two numbers
    int temp = x;
    x = y;
    y = temp;
} // end function swap

int main()
{
    cout<<"Enter two numbers to swap: ";
    int num1, num2;
    cin >> num1 >>num2;
    cout<<"You entered num1 as : "<<num1 <<" and num2 as: "<<num2<<endl; //show numbers before swapping
    cout<<"Swapping those two numbers \n" ;
    swap(num1, num2); //call template
    cout<<"After swapping num1: "<<num1<<" and num2: "<<num2<<endl; //show numbers after s

    return 0;
}


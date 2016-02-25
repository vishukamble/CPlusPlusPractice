/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 2/25/2016
Program: operatorOverloading
Desc: A simple operator voerloacing
*/
#include "Rachael.h"
#include <iostream>
using namespace std;

int main()
{
    Rachael a(14); //first obj
    Rachael b(24); //second obj
    Rachael c; //default constructor
    c = a+b; //operator _ overloaded
    cout<<a.num<<" "<<b.num <<endl;
    cout<<c.num<<endl; //doneeeeeee
    return 0;
}


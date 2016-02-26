/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 2/25/2015
Program:PairSum
Desc: Trivial program
*/

#include <iostream>
using namespace std;

int pairSum(int num1, int num2)
{
    return num1 + num2;
}

int pairSumSequence(int x)
{
    int sum = 0;
    for(int i=0; i<x; i++)
    {
        sum += pairSum(i, i+1);
        cout<<"sum of "<<i<<" and "<<i+1<<" is: "<<sum<<endl;
    }
    return sum;
}

int main()
{
    int x = pairSumSequence(5);
    cout<<x<<endl;
    return 0;
}

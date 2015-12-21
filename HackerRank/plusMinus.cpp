/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Plus Minus (Hackerrank)
Desc: Given an array of integers, calculate which fraction of the elements are positive, negative, and zeroes,
respectively. Print the decimal value of each fraction.
https://www.hackerrank.com/challenges/plus-minus
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int p = 0, m = 0, z = 0;
    int *arr;
    cin>>n;
    arr = new int [n];

    for(int i = 0; i < n; i++)
        {
            cout<<"Enter element "<<i<<" : ";
            cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
        {
        if(arr[i]>0)
            p++;
        else if (arr[i] <0)
            m++;
        else
            z++;
    }
    double pos;
    pos = static_cast<double>(p) / static_cast<double>(n);
    double neg;
    neg = static_cast<double>(m) / static_cast<double>(n);
    double zero;
    zero = static_cast<double>(z) / static_cast<double>(n);

    cout<<pos<<endl<<neg<<endl<<zero<<endl;
    return 0;
}

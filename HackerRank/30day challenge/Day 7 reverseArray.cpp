/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Reverse Array
Desc:https://www.hackerrank.com/challenges/arrays-ds
Take an arry and print it in reverse order.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, *arr;
    cin >> n;
    arr = new int [n];
    for(int i=0; i<n; i++)
        {
        cin>>arr[i];
    }
    for(int j = n-1; j >= 0; j--)
        {
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    return 0;
}


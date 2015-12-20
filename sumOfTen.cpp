/*
Author Vishu
Date: 12/19/2015
Program: Take two ints and calculate sum of that number and next 10 numbers
*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"This program will find sum of the number and next 9 numbers!"<<endl;
    int n;
    int sum = 0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    if(n>=0)
    {
        for(int i = n; i<n+10;i++)
        {
            sum+=i;
        }
    }
    cout<<"Sum of numbers between "<<n<<" and "<<n+10<<" is: "<<sum<<endl;

    return 0;
}


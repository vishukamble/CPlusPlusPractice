/*
Author Vishu
Date: 12/19/2015
Program: Find max and min in array
*/

#include <iostream>
using namespace std;

int findMax(int n, int arr[])
{
    int max=arr[0];
    for(int i=1; i<n; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}

int findMin(int n, int arr[])
{
    int min=arr[0];
    for(int i=0; i<n; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[10];
    cout<<"Enter 10 numbers: "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin >> arr[i];
        cout<<endl;
    }
    cout<<"Max number is: "<<findMax(10, arr)<<endl;
    cout<<"Min number is: "<<findMin(10, arr)<<endl;
    return 0;
}

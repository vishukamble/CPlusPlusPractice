/*
Author Vishu
Date: 12/19/2015
Program: Take an array and show it
*/

#include <iostream>
using namespace std;

int main()
{
    int n,*arr;
    cout<<"Enter size of array: ";
    cin>>n;
    arr=new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<"\nArray element "<<i<<" is: "<<arr[i]<<endl;
    }
    return 0;
}

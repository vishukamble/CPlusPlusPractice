/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program:
Desc:
*/

#include <iostream>
using namespace std;

int main()
{
    int n, v, *arr;
    cin>>v;
    cin>>n;
    arr = new int[n];
    for(int i = 0; i<n; i++)
        {
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
        {
        cout<<"array is : "<<arr[i]<< "  ";
    }
    cout<<endl;
    for(int j=0; j< n; j++)
        {
        //    cout<<"Arr[i]"<<arr[j] << " & v "<<v<<endl;
        if(arr[j]==v)
            {
            cout<<j<<endl;
        }
        break;
    }
    return 0;

}

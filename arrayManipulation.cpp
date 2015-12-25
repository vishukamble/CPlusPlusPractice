/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Array manipulation
Desc:
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,0,3,4,0,0,-2,0,0,8};
    int n = (sizeof(arr)/sizeof(arr[0]));
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==0 && arr[j]!=0)
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
        for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

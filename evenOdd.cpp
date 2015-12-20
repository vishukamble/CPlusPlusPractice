
/*
Author Vishu
Date: 12/19/2015
Program: Check if number is even or odd
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    char ans = 'y';
    do
    {
        cout<<"Enter a number to check if it is even or odd: "<<endl;
        cin>>num;
        if(num%2==0)
            cout<<num<<" is even"<<endl;
        else
            cout<<num<<" is odd"<<endl;
        cout<<"Do you want to continue? y or n? ";
        cin>>ans;

    }while(ans=='y');

    return 0;
}

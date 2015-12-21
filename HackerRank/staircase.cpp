/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Staircase
Desc: https://www.hackerrank.com/challenges/staircase
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    for(int row = 0; row < n; row++){
        for(int column = 0; column < n; column++){
            if(column < n - row - 1)
                cout<<" ";
            else
                cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}

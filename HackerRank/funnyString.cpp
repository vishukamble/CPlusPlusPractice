/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: funnyString
Desc:https://www.hackerrank.com/challenges/funny-string
Suppose you have a string S that has the length N. It is indexed from 0 to N−1. String R is the reverse of string S.
The string S is funny if the condition |Si−Si−1|=|Ri−Ri−1| is true for every i from 1 to N−1.
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int n;
    string str;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        int len = str.length()-1;
        bool condition = true;
        for(int i=1; i<str.length()-1; i++, len--)
        {
            if(abs(str[i]-str[i-1])!=abs(str[len]-str[len-1]))
               {
                   condition=false;
                   break;
               }
        }

    }
    if(condition)
        cout<<"Funny"<<endl;
    else
        cout<<"Not funny"<<endl;
    return 0;
}

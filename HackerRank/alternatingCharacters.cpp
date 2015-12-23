
/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program:alternatingCharacters.cpp
Desc:https://www.hackerrank.com/challenges/alternating-characters
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void isAlternating(string str)
    {
    int length = str.length();
    int nlength = str.length();

    for(int i=0; i<length-1; i++)
        {
        if(str[i]==str[i+1])
            {
            for(int j=i+1;j<length-1;j++)
                str[j] = str[j+1];
            i--;
            length--;
        }
    }
    cout<<nlength-length<<endl;
}

int main()
{
    int n;
    string str;
    cin>>n;
    while(n--)
        {
        cin>>str;
        isAlternating(str);
    }
    return 0;
}

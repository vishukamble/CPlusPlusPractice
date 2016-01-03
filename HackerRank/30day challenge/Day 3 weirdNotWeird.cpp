/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Day 3: If-Else Statements!
Desc: https://www.hackerrank.com/contests/30-days-of-code/challenges/day-3-if-statements/submissions/code/4457419
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%2!=0)
        cout<<"Weird"<<endl;
    if(n%2==0 && n>=2)
    {
        if(n<=5)
            cout<<"Not Weird"<<endl;
        else if(n>5 && n<=20)
            cout<<"Weird"<<endl;
        else
            cout<<"Not Weird"<<endl;
    }
    return 0;
}

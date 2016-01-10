/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: GCD program using recursion
Desc: https://www.hackerrank.com/contests/30-days-of-code/challenges/day-9-recursion
*/
#include <iostream>
using namespace std;

int find_gcd(int a,int b){
    //Write base condition
    if(a==b)
        return a;
    else
        {
        if(a>b)
            return find_gcd(a-b,b);
        else
            return find_gcd(b-a,a);
        }
    //return find_gcd(b,a%b);
}
int main() {
    int a,b;
    //Take input
    cin>>a>>b;
    int x=find_gcd(a,b);
    cout<<x;
}


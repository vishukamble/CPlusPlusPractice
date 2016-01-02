/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Day 2 Arithmetic
Desc: https://www.hackerrank.com/contests/30-days-of-code/challenges/day-2-arithmetic
*/

#include <iostream>
using namespace std;

int main()
{

    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double m;
    cin >> m;
    double t,x;
    cin>>t>>x;
    t= (t*m)/100;
    x = (x*m)/100;
    int res = m + t + x;
    cout<<"The final price of the meal is $"<<res<<"."<<endl;

    return 0;
}

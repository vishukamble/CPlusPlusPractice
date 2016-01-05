/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Day 5 Loops
Desc:  https://www.hackerrank.com/contests/30-days-of-code/challenges/day-5-loops/submissions/code/4497846
*/

#include <iostream>
#include <math.h>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,a,b,n;
    cin>>t;
    if(t>=0&&t<501)
    {
    for(int i=0; i<t; i++)
    {
        cin>>a>>b;
        if(a>=0 && b>=0)
        {
            if(a<=50 && b<=50)
            {
                cin>>n;
                if(n>0 && n < 16)
                {
                    for(int j=0;j<n;j++)
                    {
                        int temp = a;
                        int coun=0;
                        while(coun<n)
                        {
                        temp = temp + (pow(2,coun)*b);
                        cout<<temp<<" ";
                        coun++;
                        }
                        break;
                    }
                    cout<<endl;
                }
            }
        }
    }
    }
    return 0;
}

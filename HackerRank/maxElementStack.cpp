/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: maxElementStack
Desc: https://www.hackerrank.com/challenges/maximum-element
*/

#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

int main()
{
    stack<long> stk;
    double n;
    int opt;
    long x;
    cin>>n;
    if(n>0 && n<=pow(10.0,5.0))
    {
        for(int i=0; i<n; i++)
        {
            cin>>opt;
            if(opt>0 && opt<4)
            {
                if(opt==1)
                {
                    cin>>x;
                    if(x>0 && x<=pow(10.0,9.0))
                        stk.push(x);
                }
                else if(opt == 2)
                {
                    if(!stk.empty())
                        stk.pop();
                }
                else
                {
                    if(!stk.empty())
                        cout<<stk.top()<<endl;
                }
            }

        }
    }
    return 0;
}

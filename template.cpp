/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Template function
Desc: A simple template calss
*/

#include <iostream>
using namespace std;

template <class Calculate>
Calculate doSomething(Calculate a, Calculate b, int option)
{
    Calculate ans;
    switch(option)
    {
        case 1: ans = a+b;
        break;
        case 2: ans = a-b;
        break;
        case 3: ans = a*b;
        break;
        case 4: ans = a/b;
        break;
    }
    return ans;
}

int main()
{
    int num1, num2, opt;
    double x,y;
    cout<<"Enter two integers: ";
    cin>>num1>>num2;
    cout<<"What do you want to do?\n1. Add\t2. Subtract\t3. Multiple \t4. Divide"<<endl;
    cin>>opt;
    int ans = doSomething(num1, num2, opt);
    cout<<endl<<ans<<endl;
    opt = 0;
    cout<<"Enter two double: ";
    cin>>x>>y;
    cout<<"What do you want to do?\n1. Add\t2. Subtract\t3. Multiple \t4. Divide"<<endl;
    cin>>opt;
    double tem = doSomething(x, y, opt);
    cout<<endl<<tem<<endl;

    return 0;
}

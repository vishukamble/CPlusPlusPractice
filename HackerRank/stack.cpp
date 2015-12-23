/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Stack practice
Desc: basic stack practice.
*/

#include <iostream>
#include <stack>

using namespace std;

void pushstk(stack <int> &stk)
{
    int n;
    cout<<"How many elements do you want to enter?";
    cin>>n;
    while(n>0)
    {
        int x = 0;
        cout<<"\nEnter number to push: ";
        cin>>x;
        stk.push(x);
        --n;
    }
}

void popstk(stack <int> &stk)
{
    if(!stk.empty())
    {
        cout<<"Popping out element "<<stk.top()<<endl;
        stk.pop();
    }
    else
        cout<<"Stack is empty!"<<endl;
}

void topstk(stack<int> &stk)
{
    if(!stk.empty())
        cout<<"Top element of stack is "<<stk.top()<<endl;
    else
        cout<<"Stack is empty!"<<endl;
}

int main()
{
    stack<int> stk;
    char ans = 'y';
    while (ans == 'y')
    {
        cout<<"what do you want to do?\n1.Push\n2.Pop\n3.View Top"<<endl;
        int option;
        cin>>option;
        if(option==1)
            pushstk(stk);
        else if(option == 2)
            popstk(stk);
        else if (option == 3)
            topstk(stk);
        else
            cout<<"\nWrong option!"<<endl;
        cout<<"\nDo you want to continue? y for yes: ";
        cin>>ans;
    }
    return 0;
}

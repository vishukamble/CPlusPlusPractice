
/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Parenthesis;
Desc: https://www.hackerrank.com/challenges/balanced-parentheses
*/

#include <iostream>
#include <stack>;
using namespace std;

bool arePair(char start, char last)
{
    if(start=='{' && last == '}')
        return true;
    else if (start=='(' && last == ')')
        return true;
    else if (start=='[' && last == ']')
        return true;
    else
        return false;
}

bool arePerfect(string str)
{
    stack <char> stk;
    for(int i=0; i< str.length(); i++)
    {
        if(str[i]=='[' || str[i]=='{' || str[i]=='(')
            stk.push(str[i]);
		else if(str[i]==']' || str[i]=='}' || str[i]==')')
        {
			if(stk.empty() || !arePair(stk.top(),str[i]))
				return false;
			else
				stk.pop();
		}
    }
    if (stk.empty())
        return true;
    else
        return false;
}


int main()
{
    stack <char> stk;
    int n;
    string x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
       cin>>x;
       if(arePerfect(x))
            cout<<"YES"<<endl;
       else
            cout<<"NO"<<endl;
    }

    return 0;
}

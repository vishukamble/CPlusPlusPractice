/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Ice-cream parlor
Desc: https://www.hackerrank.com/challenges/icecream-parlor
Sunny and Johnny together have M dollars they want to spend on ice cream. The parlor offers N flavors, and they want to choose
two flavors so that they end up spending the whole amount.
You are given the cost of these flavors. The cost of the ith flavor is denoted by ci. You have to display the
indices of the two flavors whose sum is M.
*/

#include <iostream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, m, n;
    bool found = false;
    int *arr;
    cin >> t;
    while (t--)
        {
        cin>>m;
        cin >> n;
        arr = new int [n];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        for (int j =1; j<=n; j++)
            {
            for(int h=j+1; h<=n; h++)
                {
                if(arr[j]+arr[h]==m)
                    {
                    cout<<j<<" "<<h<<endl;
                    found = true;
                    break;
                }
            }
            if(found)
                break;
        }
    }
    return 0;
}


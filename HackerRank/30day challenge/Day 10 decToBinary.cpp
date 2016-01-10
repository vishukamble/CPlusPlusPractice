/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Decimal to binary
Desc:
*/

#include <iostream>
using namespace std;

void convertToBinary(int n)
{
    if (n / 2 != 0) {
        convertToBinary(n / 2);
    }
    cout<<n%2;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    for(int i=0; i<n;i++)
        {
        int x;
        cin>>x;
        convertToBinary(x);
        cout<<endl;
    }
    return 0;
}

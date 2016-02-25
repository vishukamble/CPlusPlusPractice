/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: pointersIntro
Desc: Brushing up pointers
*/

#include <iostream>
using namespace std;

//functions
void changeByReference(int *x, int *y)
{
    *x = 1010;
    *y = 2828;
}
void changeByValue(int x, int y)
{
    x = 1;
    y = 0;
}

//main function
int main()
{
    int num1, num2;
    cout<<"Enter values of num1 and num2"<<endl;
    cin>>num1>>num2;

    int *x = &num1; //pointer to address
    int *y = &num2;
    changeByValue(num1, num2); //passing copy of values
    cout<<"Value of num1 and num2 after changeByValue are: "<<num1<<"  "<<num2<<" respectively. "<<endl;

    changeByReference(x, y); //passing reference instead of value
    cout<<"Value of num1 and num2 after changeByReference are: "<<num1<<"  "<<num2<<" respectively. "<<endl;

    //Chnaging values of variables
    cout<< "Value of *x is " << *x << endl;
    cout<< "Value of *y is " << *y << endl;

    cout<<" Adding numbers to pointers: " <<endl; //Adding 1 and 2 to pointer x
    cout<<"Adding 1 to x pointer: \nPrev value: "<<x<<"\t New value: "<<x+1<<endl;
    cout<<"Adding 2 to x pointer: \nPrev value: "<<x<<"\t New value: "<<x+2<<endl;
    //Adding 1 and 2 to pointer y
    cout<<"Adding 1 to y pointer: \nPrev value: "<<y<<"\t New value: "<<y+1<<endl;
    cout<<"Adding 2 to y pointer: \nPrev value: "<<y<<"\t New value: "<<y+2<<endl;


    return 0;
}

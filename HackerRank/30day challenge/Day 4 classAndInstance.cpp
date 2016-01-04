/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Day 4: Logical Operators + Class vs. Instance!
Desc: https://www.hackerrank.com/contests/30-days-of-code/challenges/day-4-boolean-operators-class-vs-instance
*/
#include <iostream>
using namespace std;

class Person{
public:
   int age ;
   Person(int initial_Age);
   void amIOld();
   void yearPasses();
};
Person::Person(int initial_Age){
  // Add some more code to run some checks on initial_Age
    if(initial_Age<0)
        {
        cout<<"This person is not valid, setting age to 0."<<endl;
        age = 0;
        cout<<"Person constructor age: "<<age<<endl;
    }
    else
        {
        age=initial_Age;
        cout<<"Constructor else age: "<<age<<endl;
    }
}
void Person::amIOld(){
    // Do some computations in here and print out the correct statement to the console
    cout<<"amIOld Function age: "<<age<<endl;
    if(age>=0&&age<13)
        cout<<"You are young."<<endl;
    else if(age>=13&&age<18)
        cout<<"You are a teenager."<<endl;
    else
        cout<<"You are old."<<endl;
}


void Person::yearPasses(){
  // Increment the age of the person in here
  cout<<" year passes age: "<<age<<endl;
    ++age;
}

int main(){
    int T,age;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>age;
        Person p(age);
        p.amIOld();
        for(int j=0;j<3;j++)
        {
            p.yearPasses();

        }
        p.amIOld();
        cout<<"\n";
    }
    return 0;
}


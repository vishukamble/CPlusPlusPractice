/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 2/25/2015
Program: Pure Virtual functions
Desc: A program using pure virtual functions.
*/

#include <iostream>
#include <string>
using namespace std;

class Hollywood
{
public:
    virtual void movies()//=0 Enable this and comment below for pure virtual functions
    {//this is for virtual functions
        cout<<"I am hollywood actress!"<<endl;
    }

};

class Jennifer : public Hollywood
{
public:
    void movies()
    {
        cout<<"I am Jennifer and I have worked in F.R.I.E.N.D.S."<<endl;
    }
};

class Emma : public Hollywood
{
public:
    void movies()
    {
        cout<<"I am Emma and I have worked in Harry Potter."<<endl;
    }
};


int main()
{
    Emma e;
    Jennifer j;

    Hollywood *hollyE = &e;
    Hollywood *hollyJ = &j;
    hollyE->movies();
    hollyJ->movies();

    return 0;
}


/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 2/25/2015
Program: Polymorphism
Desc: A funciton implementing polymorphism
*/

#include <iostream>
#include <string>
using namespace std;

class Hollywood //Base class
{
protected:
    string actress;
public:
    void setName(string x)
    {
        actress = x;
    }
};

class Jennifer : public Hollywood //derived class
{
public:
    void movies()
    {
        cout<<"I am "<< actress <<" and I worked in F.R.I.E.N.D.S."<<endl;
    }
};

class Emma : public Hollywood //derived class
{
public:
    void movies()
    {
        cout<<"I am "<< actress <<" and I worked in Harry Potter."<<endl;
    }
};


int main()
{   //objects
    Emma e;
    Jennifer j;
    //creating pointers to objects
    Hollywood *hollyE = &e;
    Hollywood *hollyJ = &j;
    //calling virtual function
    hollyE->setName("Emma Watson");
    hollyJ->setName("Jennifer Aniston");

    e.movies();
    j.movies();

    return 0;
}

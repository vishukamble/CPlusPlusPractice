/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 2/25/2016
Program: Inheritance
Desc: Using inheritance
*/
#include "University.h"
#include "College.h"
#include "College2.h"
#include <iostream>
using namespace std;

int main()
{
    College coll;
    College2 coll2;
//Bharati Vidyapeeth College display
    coll.sayCollegeName();
    coll.univName();
// A C Patil College display
    coll2.sayCollegeName();
    coll2.univName();
/*
    With the use of inheritance, I don't have to specifically write that college
    is a part of which university. An university can have many colleges. All are
    part of same university so its useless to write that function everytime in
    those classes. So with inheritance, you write the function once and call it
    from the derived classes. This helps makes thing easier and there are less
    chances of you making any mistake.
*/
    return 0;
}


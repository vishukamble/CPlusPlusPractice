#include "Emma.h"
#include <iostream>

using namespace std;

Emma::Emma(int x):em(x)
{
}

void Emma::printSomething()
{
    cout<<"em: "<<em<<endl;
    cout<<"this -> em: " << this->em << endl;
    cout<<"(*this).em: " << (*this).em << endl;

}

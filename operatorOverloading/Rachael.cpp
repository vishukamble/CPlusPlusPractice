#include "Rachael.h"
#include <iostream>
using namespace std;

Rachael::Rachael(){}

Rachael::Rachael(int x)
{
    num = x;
}

Rachael Rachael::operator+(Rachael aro)
{
    Rachael brandNew;
    brandNew.num = num + aro.num;
    return (brandNew);
}


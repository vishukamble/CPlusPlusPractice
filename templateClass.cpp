/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 2/25/2015
Program: TemplateClass
Desc:template using classes
*/

#include <iostream>
using namespace std;

template <class T>
class Jennifer
{
    T num1, num2;
public:
    Jennifer(T x, T y)
    {
        num1 = x;
        num2 = y;
    }

    T bigger();
};

template <class T>
T Jennifer<T>::bigger()
{
    return (num1 > num2 ? num1 : num2);
}

int main()
{
    Jennifer <int> obj (12,90);
    Jennifer <double> obj2 (23813.21312,214843.322);
    Jennifer <float> obj3 (78.392,21.32423);

    cout<<obj.bigger()<<endl;
    cout<<obj2.bigger()<<endl;
    cout<<obj3.bigger()<<endl;

    return 0;
}

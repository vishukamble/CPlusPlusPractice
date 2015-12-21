/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info

Program: Function Overloading
Desc: A program that demonstrates function overloading.  :)
*/

#include <iostream> //using iostream header file

using namespace std; //using std for cin, cout and endl

//Function Declarations
int area(int);
double area(double, double);
float area(float, float);

//main function starts
int main()
{
	//Initializa all variables
	int num;
	float base, height;
	double length, width;

	//Ask user for input
	cout << "Enter num: ";
	cin >> num;
	cout << "Enter number 1: ";
	cin >> length;
	cout << "Enter number 2: ";
	cin >> width;

	//Convert double to float
	base = float(length);
	height = float(width);

	cout << "base is  " << base << endl;
	cout << "height is  " << height << endl;

	cout << "Area of circle is : "<< area(num); //call area function to print area of square and circle
	cout << "Area of rectangle is : " << area(length, width) << endl; //print area of rectange
    cout << "Area of triangle is: " << area(base, height) << endl; //print area of triangle

	system("pause"); //Pause the screen to view output
	return 0; //return an int value for int main()
}
//main function ends

//Area of square and circle with one int parameter
int area(int num)
{
	cout << "Area of circle is: " <<3.14*num*num << endl;
	cout << "Area of square is: " << num*num << endl; //print area of square
	return 0;
}

//Area of rectangle that takes two double values
double area(double length, double width)
{
	return length*width; //return area of rectangle length*width
}

//Area of triangle with base and height
float area(float base, float height)
{
	return 0.5*base*height; //return area of triangle
}

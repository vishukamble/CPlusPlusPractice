/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 2/29/2016
Program: Abstract class
Desc: A simple abstract class program
*/

#include <iostream>
using namespace std;

class Shape
{
	virtual void setX(int x) = 0;
	virtual void setY(int y) = 0;
	virtual int getX() const = 0;
	virtual int getY() const = 0;
	virtual void draw() const = 0;
};

class Circle : public Shape
{
private:
	int x, y, radius;
public:
	Circle(int xCor, int yCor, int radCor)
	{
		x = xCor;
		y = yCor;
		radius = radCor;
	}
	virtual void setX(int xCor) { x = xCor; }
	virtual void setY(int yCor) { y = yCor; }
	virtual void setRadius(int rad) {	radius = rad; 	}
	virtual int getX() const { return x; }
	virtual int getY() const { return y; }
	virtual int getRadius() const { return radius; }
	virtual void draw() const
	{
		cout << "Drawing circle at: " << getX() << " and " << getY() << " of radius: " << getRadius() << endl;

	}
};

int main()
{
	Circle c1(2, 3, 5);
	c1.draw();
	return 0;
}

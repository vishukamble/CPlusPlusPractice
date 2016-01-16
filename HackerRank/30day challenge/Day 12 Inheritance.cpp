/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Day 12 Inheritance
Desc: https://www.hackerrank.com/contests/30-days-of-code/challenges/day-12-inheritance
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Student{
    protected:
        string firstName;
        string lastName;
        int phone;
    public:
        Student(string fname,string lname,int p)
        {
            firstName=fname;
            lastName=lname;
            phone=p;
        }
        void display()
        {
            cout<<"First Name: "<<firstName<<"\nLast Name: "<<lastName<<"\nPhone: "<<phone;
        }

};

class Grade :  public Student{
    private:
         int score;
    public:
    Grade(string x, string y, int a, int b): Student(x, y, a), score(b)
    {

    }

    char calculate()
	{
        int score = this->score;
		if (this->score < 40)
			return 'D';
		else if (this->score >= 40 && this->score < 60)
			return 'B';
		else if (this->score >= 60 && this->score < 75)
			return 'A';
		else if (this->score >= 70 && this->score < 90)
			return 'E';
		else
			return 'O';
	}
};

int main() {
    string firstName,lastName;
    int score,phone;
    cin>>firstName;
    cin>>lastName;
    cin>>phone;
    cin>>score;
    Student stud = new Student(firstName,lastName,phone,score);
    //Student *stu=new Grade(firstName,lastName,phone,score);
    //stu->display();
    stud->display();
    //Grade *g=(Grade*)stu;
    Student grad = new Grade(stud);
    cout<< "\nGrade: "<<grad->calculate();
    return 0;
}

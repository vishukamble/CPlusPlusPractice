
/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program: Day 13: Abstract Classes
Desc: https://www.hackerrank.com/contests/30-days-of-code/challenges/day-13-abstract-classes
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

//Write MyBook class
class MyBook : public Book {
    private:
        int price;

    public:
        MyBook (string title, string author, int price) :
            Book(title,author), price(price)
            {

            }

        void display() {
            cout << "Title: " << title <<endl;
            cout << "Author: " << author <<endl;
            cout << "Price: " << price << endl;
        }

};


int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}

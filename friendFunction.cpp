/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 2/25/2016
Program: FriendFunction
Desc: A program for friendFucntion
*/

#include <iostream>
using namespace std;
//Friend class who is going ot make friends
class friendClass
{
public:
    friendClass() //Constructor
    {
        myFriend=0;
    }

private:
    int myFriend;

friend void IAmFriend(friendClass &fu); //new friend
};
//Friend
void IAmFriend(friendClass &fu)
{
    fu.myFriend = 99; //Imma change value of my friend's variable
    cout<<fu.myFriend<<endl; //just coz i can
}

int main()
{
    friendClass bob;
    IAmFriend(bob);
    return 0;
}


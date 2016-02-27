/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 02/27/2016
Program: Doubly LinkedList
Desc: Program implementing doubly linked list
*/

/*
THis is way away from an IDEAL doubly linked list. I will be modifying this later with separate header
file and a class file, make members private and then implement it again nicely, giving options to add
and delete nodes too. ATM I don't have time, I have to go through a lot so this is just like brushing
up linked list.
*/

#include <iostream>
using namespace std;

struct node //defining node
{
    int data;
    node* next;
    node* prev;
};

//global variable (again honestly, i don't have time)

node* head;
node* tail;
node* n;

void printForward(node* head)
{
    node* ptr = head; //start from root
    while(ptr != NULL) //go until the tail
    {
        cout << ptr->data <<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

//printing the list in reverse
void printBackward(node* tail)
{
    node* ptr = tail; //start from the end
    while(ptr != NULL) //go until head
    {
        cout << ptr->data <<" "; //print the data
        ptr = ptr->prev; //go one step back
    }
    cout<<endl;
}

//adding data to list
void addData(int data, int coun)
{

    int ans = 0;
    if(head == NULL) //if no list exists, add first node, make it head and tail
    {
        n = new node;
        n->data = data;
        n->prev = NULL;
        head = n;
        tail = n;
    } else //if head exists add next node
    {
        n = new node; //create new node
        n->data = data; //add data to new node
        n->prev = tail; //link the new node with previous
        tail->next = n; //link the previous node with new node
        tail = n; //make the new node tail (since it will be the last node)
        tail->next = NULL; //make the tail's next node null (since it is last)
    }
    cout<<"New data: "<<data<<" added at position: "<<coun<<endl; //show where data was added
    cout<<"Do you wanna see the list? \n1. Yes\n2. No "; //ask if user wants to check the list
    cin>>ans;
    cout<<endl;
    if(ans == 1) //if he wants to,
        {
            int rev=2;
            cout<<"1. Show in normal order\t2. Show in reverse order: ";
            cin>>rev;
            (rev == 1) ? printForward(head) : printBackward(tail); //if 1. printForward else print backward
        }
}

int main()
{
    int coun = 0; //counter
    int num, inputs;
    cout<<"Enter number of elements you want to add in the list: ";
    cin>>inputs;
    for(int i = 0; i<inputs; i++)
    {
        cout<<"\nEnter data to add to list: ";
        cin>>num;
        coun++;
        addData(num, coun);
    }
    return 0;
}


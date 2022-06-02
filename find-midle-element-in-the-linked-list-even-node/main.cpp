/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
};
void printlist(Node* n)
{
    while(n!= NULL)
    {
        cout<<n->value<<endl;
        n=n->next;
    }
}
void middleElement(Node *head)
{
    Node  *slow, *fast;
    slow = fast =head;
    
    if(head==NULL)
    {
        cout<<"empty list";
        return;
    }
    else
    {
        while(fast != NULL && fast->next != NULL)
        {
            slow= slow->next;
            fast=fast->next->next;
        }
        cout<<slow->value;
    }
}

    


int main()
{
   Node* head = new Node();
   Node* second = new Node();
   Node* third = new Node();
   Node* forth = new Node();
   
   
   head->value = 1;
   head->next=second;
   second->value= 2;
   second->next= third;
   third->value= 3;
   third->next= forth;
   forth->value=4;
   forth->next=NULL;
   
   printlist(head);
   middleElement(head);
   

    return 0;
}

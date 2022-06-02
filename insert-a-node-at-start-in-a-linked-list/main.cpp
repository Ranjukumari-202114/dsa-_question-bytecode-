/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

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
// call be reference here 
Node* insertatfront(Node* &head, int newvalue)
{
    // 1>   prepare a new node
    Node* newNode = new Node();
    newNode->value= newvalue;
    
    //2>  put it in front of current Node
    
    newNode->next= head;
    
    // 3> moove head of the list  to print to the new Node
    
    head = newNode;
    //returning the new address
    return head;
    
}

int main()
{
   Node* head = new Node();
   Node* second = new Node();
   Node* third = new Node();
   
   
   head->value = 1;
   head->next=second;
   second->value= 2;
   second->next= third;
   third->value= 3;
   third->next= NULL;
   // storing the updated head value 
   insertatfront(head,5);
   insertatfront(head,9);
   printlist(head);
   
   

    return 0;
}
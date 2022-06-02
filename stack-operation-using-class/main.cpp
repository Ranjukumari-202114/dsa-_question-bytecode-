/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


#define n 20

class Stack
{
    int* arr;
    int top;
    
    
   public: 
    Stack()
    {
        arr = new int[n];
        top=-1;
        
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"stack overflow"<<endl;
            return;
            
        }
        top++;
        arr[top]=x;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;
            return;
        }
        top--;
    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"no element to stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    
    bool empty()
    {
        return top==-1;
    }
    
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}

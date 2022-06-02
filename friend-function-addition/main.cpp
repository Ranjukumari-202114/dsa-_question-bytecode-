/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

class Box
{
    private:
    int len;
    
    public:
    
    void set_length(int i)
    {
        len=i;
    }
    
    friend int print_length(Box b);
};

int print_length(Box b)
{
    return int(b.len);
}

int main()
{
    Box A;
    A.set_length(4);
    
    cout<<"Length of box"<<" :"<<print_length(A);
    return 0;
}

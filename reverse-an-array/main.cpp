/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arr[5]={23,45,67,87,98};
    int start = 0;
    int end = 4;
    int temp;
    while(start<end)
    {
        temp  = arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       start++;
       end--;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
        
    }

    return 0;
}
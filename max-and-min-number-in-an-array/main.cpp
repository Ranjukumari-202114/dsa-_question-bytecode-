/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;



void getMinMax(int arr[], int n)
{
    int max=arr[0],min=arr[0];
    int i;
    int max_index,min_index;
    for(int i= 0;i<n;i++)
    {
        if(arr[i]>max)
          {
            max= arr[i];
            max_index =i;
          }

        if(arr[i]<min)
          {
              min = arr[i];
              min_index = i;
          }
      }   
    cout<<"the maximum element is  :"<<max<<"  at index  "<<max_index<<endl;
    cout<<"the minimum element is :"<<min<<"  at index  "<<min_index;  
    }

int main()
{
    int arr[]= {23,64,94,2,34,74,73};
    int n=7;
    getMinMax(arr, n);
    return 0;
}
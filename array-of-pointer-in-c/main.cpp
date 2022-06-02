/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
 
using namespace std;
const int MAX = 5;
 
int main ()
{
   int  var[MAX] = {34, 54, 65, 98,23};
   int *ptr[MAX];
 
   for (int i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; 
   }
   
   for (int i = 0; i < MAX; i++) {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl;
   }


}






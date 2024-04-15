//when function call itself its called recursion 
// it mantains the stack process
// two parts  base condion and function calling part
#include <iostream>
using namespace std;
int c=0;
int print()
{
    if(c>3)
    {
         cout<<"i am runnig for : "<< c << " times";
    return c;
    //why here 1 is printing first . 
   
    }
    else
    {
    cout<<1<<endl;
       c++;
    print();
    }
 
}
int main() {
print();

    return 0;
}
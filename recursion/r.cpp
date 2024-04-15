//when function calls itself then it calls recursion
// it stops when it meets some specified conditions


#include <iostream>
using namespace std;

//1

// int print(int i, int n)
// {
//     // big (o(n))--as we calling it n times ;
//     //space com -- o(n) -- as we are taking stack space  
//     if( i>=n+1)
//     {
//         cout<<"function calling stopped at "<< i << " point ";
//         return i;
//     }
//     else
//     {
//         cout<<"my name is Imaran Nazir Udoy : "<< i << " times "<<endl;
//         print(i+1,n);
//     }
// }

//2

// int printn(int i , int n)
// {
//     if(i>=n+1)
//     {
//         return 0;
//     }
//     else
//     {
//         cout<<i<<endl;
//         printn(i+1,n);
//     }
// }

//3

int printn1(int j, int n)
{
    if(j>n)
    {
        return 0;
    }
    else
    {
      
        printn1(j+1,n);
          cout<<j<<endl;
    }
}


//4



int main() {
    int n; // Initialize i to start from 1
    cin >> n;
    int i ;
    i= 1;
    // print(i, n);
    // printn(i,n);
    int j=1;
    printn1(j,n);
    return 0;
}

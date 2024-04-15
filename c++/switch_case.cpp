#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;

    //switch case started : 
    switch (x)
    {
    case 1:
        cout<<"i am one "<<x;
        break;
         case 2:
          cout<<"i am 2 "<<x;
        break;
         case 3:
           cout<<"i am 3 "<<x;
        break;
    // if no option matches than it will go to default 
    default:
        cout<<"i am default ";
        break;
    }

    return 0;
}
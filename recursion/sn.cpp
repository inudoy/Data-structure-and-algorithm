#include<iostream>
using namespace std;

//paramiterized way
int sum(int i, int s )
{
   if(i<1)return s;
   else return sum(i-1,s+i);
   //it means add untill i<1;
    
}
// functional way
int sum1(int m)
{
    if(m==0)return 0;//as f(0)=0 

    else return(m + sum1(m-1));
}

// functional way
int fact(int m)
{
    if(m==0)return 1;//as f(0) should return 1 ;
    // if we return 0 than whole output will be 0 thats why;
    else return(m * fact(m-1));
}

//fact paramiterized
int fact1(int i, int s )
{
   if(i<1)return s;
   else return fact1(i-1,s*i);
   //it means add untill i<1;
    
}

int main()
{
    int n;
    cin>>n;
     cout<<  sum(n, 0)<<endl;
     cout<<sum1(n)<<endl;
     cout<<fact(n)<<endl;
      cout<<fact1(n,1)<<endl;

}
#include<iostream>
using namespace std;

int finding_gcd(int a , int b)
{
   int numerator=(a>b)?a:b;
   int denominator=(a<b)?a:b;
int rem=numerator%denominator;
while (rem!=0)
{
numerator=denominator;//denumerator is becoming nuemaretor
denominator=rem;//reminder is becoming demonianator
rem=numerator%denominator;

}
return denominator;

//o(log base (min(a,b)));

}
//this is euqliodian method
/*
1.numerator(18)/denominator(6)
2.reminder(6)
......................
1.then reminder becomes denominator ( now 6 is denominator)
2.The denominator becomes the numerator(now 12 is numerator)

..............................
1.It will continue untill reminder goes 0;
2.then we can say the denomiator for which reminder become 0 it is the (GCD)
12%6==0;--> 6 is Gcd 
3.or we can increase one line and can make 0 as a denominator and 6 as a numerator 
and make  a condition that
if(denominator ==0 ) than numerator of that time will be numerator ---
so 0/6--> 6 is the GCD

......................... ....
FOR LCM  of 2 numbers 
1.(a*b)/(their gcd)
(12*18)/6-->36 is the lcm

*/
int gcd(int a , int b)
{
    if(b==0)return a;
return(b,b%a);

}
int lcm(int a, int b)
{

int result=(a*b)/(gcd(a,b));
return result;
}
int main()
{
    int a, b;

    cin>>a>>b;

   cout<< gcd(a,b)<<endl;
   cout<<lcm(a,b)<<endl;

  cout <<"by while loop : "<<finding_gcd(a,b);

}
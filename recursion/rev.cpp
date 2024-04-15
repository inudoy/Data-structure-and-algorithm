#include<iostream>
using namespace std;
//using 2 pointer approach
void f2(int i , int a[] , int n)
{
    if(i>=n)return;
    swap(a[i],a[n]);
    f2(i+1  , a, n-1);
}

//reversing function for array one pointer approach
void f (int i , int a[], int n)
{
    if(i>=(n/2))return ;
    swap(a[i],a[n-i-1]);
    f(i+1,a,n);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    f2(0,a,n-1);
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    

}
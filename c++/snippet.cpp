#include<bits/stdc++.h>
using namespace std;
void counting(int n)
{
    
    if(n==0)
    {
        return ;
    }
    cout<<n<<endl;
    counting(n-1);
}
int main ()
{
    //write your code here
    int n;
    cin>>n;
 counting(n);   
    //return with 0 
    return 0;
}
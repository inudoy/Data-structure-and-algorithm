#include<iostream>
using namespace std;

bool pal(int i,int n,string s)
{
   
    
        if(i>=(n/2))
        {
            return true;
        }
        if(s[i]!=s[n-i-1])
        {
            return false;
        }
        return pal(i+1,n,s);
    
}

 int main()
 {
    string s;
    cin>>s;
    int n= s.size();
 int k=  pal(0,n, s);
  cout<<k;

    return 0;
 }
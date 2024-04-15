#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    //o (sqrt(n))
    int c=0;
    for(int i=1;i<=sqrt(n);i++)
    {
     
        if(n%i==0)
        {   c++;
            v.push_back(i);
            if((n/i)!=i)
            {
                v.push_back(n/i);//it will print all the number that is >sqrt(n)
                   c++;
            }
        }
    }
//o(n log n)
    sort(v.begin(),v.end());
    //o(n)
    for(auto i:v)
    {
        cout<<i<<endl;
    }
   if(c==2)
   {
    cout<<"prime"<<endl;
   }
   else
   {
    cout<<"not a prime"<<endl;
   }
}

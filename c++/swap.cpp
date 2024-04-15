#include<iostream>
#include<utility>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<"before "<<n << " " << p<<endl;
  swap(n,p);
  cout<<"after " <<n<<" "<<p<<endl;
}
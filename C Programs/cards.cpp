#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int ans,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      ans=(n*(3*n+1))/2;
      cout<<ans%1000007<<"\n";
    }
    return 0;
}

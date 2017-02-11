#include<iostream>
using namespace std;
int main()
{
   int t,i,k,arr[40],j;
   long int n;
   cin>>t;
   while(t--)
   {
       j=0,i=0;
    cin>>n>>k;
       while(n!=0)
       {
           arr[i++]=n%2;
           if(n%2==0)
            ++j;
           n/=2;
       }
    --i,n=0;
    if(j<k-1)
        n=-1;
    else if(j==k-1)
   }
    return 0;
}

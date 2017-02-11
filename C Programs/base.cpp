/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
long long int power(long long int a,long long int n)
{
    long long int c;
    if(n==0)
        return 1;
    else if(n%2==0)
    {
     c=power(a,n/2);
     return (c*c);
    }
    else
    {
        c=power(a,n/2);
     return ((c*c)*a);
    }
}
int main()
{
  int t,i,root,limit;
  long long int n,ans,low,up;
  double u,l;
  scanf("%d",&t);
  while(t--)
  {
    ans=0;
    scanf("%lld",&n);
    if(n==1)
      printf("INFINITY\n");
    else
    {
     i=2;
     up=n;
     low=n/2+1;
     limit=sqrt(n)+10;
     while(1)
     {
       u=floor(pow(up,1.0/i));
       l=ceil(pow(low,1.0/i));
       if(power(u+1,i)<=up)
         u++;
       if(power(l-1,i)>=low)
         l--;
      // cout<<u<<" "<<l<<endl;
       if(l<3 && u<3)
         break;
       else if(l<3)
        l=3;
       if(u<limit && l<=u)
         {
           ans+=u-l+1;
           limit=l;
         }
       else if(u>=limit && l<limit)
         {
           ans+=limit-l;
           limit=l;
         }
         if(l<3)
          break;
         ++i;
     }
     ans+=(n-n/2);
     if(n>3)
      ans++;
    printf("%lld\n",ans);
    }
  }
  return 0;
}




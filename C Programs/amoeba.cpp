#include<cstdio>
int main()
{
   long long int ans,n,m,r,c1,c2;;
   int k;
   scanf("%lld %lld %d",&n,&m,&k);
   ans=m*n;
   while(k--)
   {
     scanf("%lld %lld %lld",&r,&c1,&c2);
     ans-=(c2-c1+1);
   }
   printf("%lld",ans);
}

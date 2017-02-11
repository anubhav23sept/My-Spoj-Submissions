#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
 int t,n,m,c,i,j,ans;
 scanf("%d",&t);
 while(t--)
 {
     ans=0;
     scanf("%d %d %d",&n,&m,&c);
     i=1;
     j=c;
     while(i<=j && i<=n)
     {
       if(c%i==0)
       {
         if(j<=m && j<=n && i!=j)
            ans+=2;
         else if(j<=m && j<=n && i==j)
            ans++;
         else if(j<=m || (j<=n && i<=m))
            ans++;
       }
       ++i;
       j=c/i;
     }
    printf("%d\n",ans);
 }
 return 0;
}

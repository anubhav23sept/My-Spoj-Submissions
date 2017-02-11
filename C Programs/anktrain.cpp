#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   int t,n,a;
   scanf("%d",&t);
   while(t--)
   {
    scanf("%d",&n);
    a=(n-1)%8;
    if(a==6)
      printf("%dSU\n",n+1);
    else if(a==7)
      printf("%dSL\n",n-1);
    else if(a==0)
      printf("%dLB\n",n+3);
    else if(a==3)
      printf("%dLB\n",n-3);
    else if(a==1)
      printf("%dMB\n",n+3);
    else if(a==4)
      printf("%dMB\n",n-3);
    else if(a==2)
      printf("%dUB\n",n+3);
    else if(a==5)
      printf("%dUB\n",n-3);
   }
    return 0;
}

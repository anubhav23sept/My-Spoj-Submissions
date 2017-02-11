#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  int t;
  long int s,v;
  double ans;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%ld %ld",&s,&v);
    ans=s*2;
    ans/=3;
    ans/=v;
    printf("%0.15lf\n",ans);
  }
    return 0;
}

/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,c,d,l,a;
  scanf("%lld",&t);
  while(t--)
  {
    a=1;
    scanf("%lld %lld %lld",&c,&d,&l);
    if(l%4)
      a=-1;
    l=l-4*d;
    if(l<0)
      a=-1;
    c-=(l/4);
    if(c<0)
      a=-1;
    if(((c+1)/2)>d)
      a=-1;
    if(a==1)
      printf("yes\n");
    else
      printf("no\n");
  }
  return 0;
}



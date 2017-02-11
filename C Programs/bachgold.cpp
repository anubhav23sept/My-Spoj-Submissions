/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i;
  scanf("%d",&n);
  if(n%2)
  {
    printf("%d\n",(n-3)/2+1);
    for(i=0;i<(n-3)/2;++i)
      printf("2 ");
    printf("3");
  }
  else
     {
    printf("%d\n",n/2);
    for(i=0;i<n/2;++i)
      printf("2 ");
  }
  return 0;
}



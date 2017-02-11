/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int count,i,t,n,arr[100002];
  scanf("%d",&t);
  while(t--)
  {
    count=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
      scanf("%d",&arr[i]);
    for(i=0;i<n;++i)
    {
      if(!arr[i])
        count++;
    }
    for(i=0;i<n;++i)
    {
      if(!arr[i])
        break;
    }
    printf("%d\n",1000*count+100*(n-i));
  }
  return 0;
}



/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,arr[102],i,count=0,l,r,arr2[2][103],k=0;
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  {
    scanf("%d",&arr[i]);
    if(arr[i])
      count++;
  }
  if(count<1)
    printf("NO");
  else
  {
    printf("YES\n%d\n",count);
    l=1;
    for(i=1;i<=n;++i)
    {
      if(arr[i])
      {
        r=i;
        arr2[0][k]=l,arr2[1][k]=r;
        ++k;
        l=r+1;
      }
    }
    if(l<=n)
    arr2[1][k-1]=n;
    for(i=0;i<k;++i)
      printf("%d %d\n",arr2[0][i],arr2[1][i]);
  }
  return 0;
}



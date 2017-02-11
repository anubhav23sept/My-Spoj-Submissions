/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,i,count=0,ans=0,arr[100002],arr2[100002]={0};
  scanf("%d",&t);
  while(t--)
  {
    count=0;
    ans=0;
    memset(arr2,0,sizeof(arr2));
    scanf("%d",&n);
    for(i=1;i<=n;++i)
      scanf("%d",&arr[i]);
    for(i=1;i<=n;++i)
    {
      if(arr2[i])
        count++;
      if(arr[i]<=i)
        count++;
      else
      {
        if((arr[i]-count-1)>2)
          break;
        ans+=(arr[i]-count-1);
        arr2[arr[i]]++;

      }
    }
    if(i<=n)
     printf("Not Allowed\n");
    else
    printf("%d\n",ans);
  }
  return 0;
}



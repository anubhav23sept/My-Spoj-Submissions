/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int arr[203],n,dp[202][202][202];
int borw(int i,int b,int w)
{
  int a=202;
  if(i==n+1)
    return 0;
  if(dp[i][b][w]==-1)
  {
    if(b==-1 || arr[i]>arr[b])
      a=min(a,borw(i+1,i,w));
    if(w==-1 || arr[i]<arr[w])
      a=min(a,borw(i+1,b,i));
     a=min(a,1+borw(i+1,b,w));
     dp[i][b][w]=a;
  }
  return dp[i][b][w];
}
int main()
{
  int i;
  while(1)
  {
    memset(dp,-1,sizeof(dp));
    scanf("%d",&n);
    if(n==-1)
      break;
    for(i=1;i<=n;++i)
      scanf("%d",&arr[i]);
    printf("%d\n",borw(1,-1,-1));
  }
}



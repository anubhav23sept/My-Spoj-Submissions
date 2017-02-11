/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int arr[1000002];
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    for(i=0;i<n;++i)
      scanf("%d",&arr[i]);
    dp[0][n-1]=dp[1][n-1]=arr[n-1];
    for(i=n-2;i>=0;--i)
    {
      if(arr[i]>=dp[1][i+1])
      {
        dp[0][i]=max(dp[0][i+1]+dp[1][i+1],arr[i]);
        if(dp[0][i]==arr[i])
         dp[1][i]=arr[i];
        else
         dp[1][i]=dp[1][i],dp[1][i+1];
      }
      else
      {
       dp[0][i]=dp[0][i+1]+dp[1][i+1];
       dp[1][i]=dp[1][i+1];
      }
    }
  }
  return 0;
}



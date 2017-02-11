/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
#define MAX 10e+8
using namespace std;
int n,k,arr[102],dp[102][102];
int apple(int in,int j)
{
  //cout<<in<<" "<<j<<endl;
  if(in>n || j<0)
    return MAX;
  if(j==0)
    return 0;
  int i,ans=MAX;
  if(dp[in][j]==0)
  {
   for(i=1;i<=j;++i)
    if(arr[i]!=-1)
     ans=min(ans,apple(in+1,j-i)+arr[i]);
   dp[in][j]=ans;
  }
  return dp[in][j];
}
int main()
{
  int t,i;
  scanf("%d",&t);
  while(t--)
  {
    memset(dp,0,sizeof(dp));
     scanf("%d %d",&n,&k);
    for(i=1;i<=k;++i)
      scanf("%d",&arr[i]);
    i=apple(0,k);
    if(i>=MAX)
     printf("%d\n",-1);
    else
     printf("%d\n",i);
  }
  return 0;
}
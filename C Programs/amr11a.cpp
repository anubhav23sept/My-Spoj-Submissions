/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
#define maxi 10e8
using namespace std;
int r,c,arr[505][505],dp[505][505];
int harry(int i,int j)
{
  //cout<<i<<" "<<j;
  if(i==r && j==c)
    return 1;
  if(dp[i][j]==maxi)
  {
   if(j==c)
    dp[i][j]=-arr[i][j]+harry(i+1,j);
   else if(i==r)
    dp[i][j]=-arr[i][j]+harry(i,j+1);
   else
    dp[i][j]=-arr[i][j]+min(harry(i,j+1),harry(i+1,j));
  }
  if(arr[i][j]>0 && dp[i][j]<0)
    dp[i][j]=0;
  if(arr[i][j]<0 && dp[i][j]==-arr[i][j])
    dp[i][j]++;
  //cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
  return dp[i][j];
}
int main()
{
  int i,j,t,ans;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;++i)
      for(j=1;j<=c;++j)
      {
        scanf("%d",&arr[i][j]);
        dp[i][j]=maxi;
      }
    i=harry(1,1);
    if(i<1)
      ans=1;
    else
      ans=i;
    printf("%d\n",ans);
  }
  return 0;
}
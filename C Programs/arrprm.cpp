/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
#define gc getchar
using namespace std;
void sc(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
int n,k,arr[2003],prime[2003],arr2[2000],dp[2002],sum[2003];
void seive()
{
  int i,j;
  arr2[k++]=0;
  for(i=2;i<=2003;++i)
  {
    if(!prime[i])
    {
      arr2[k++]=i;
      j=2;
      while(j*i<=2003)
      {
        prime[j*i]=1;
        ++j;
      }
    }
  }
}
int arrprm(int i)
{
  if(i>n)
    return 0;
  int j;
  if(dp[i]==-1)
  {
    for(j=0;j<k;++j)
    {
      if((i+arr2[j]-1)>n)
        break;
      dp[i]=max(dp[i],arrprm(i+arr2[j]+1)+sum[i+arr2[j]-1]-sum[i-1]);
    }
  }        // cout<<i<<" "<<dp[i][p]<<endl;
  return dp[i];
}
int main()
{
  seive();
  int t,ans,i,j;
  sc(t);
  while(t--)
  {
    memset(dp,-1,sizeof(dp));
    sc(n);
    for(i=1;i<=n;++i)
    {
      sc(arr[i]);
      sum[i]=sum[i-1]+arr[i];
    }
    ans=arrprm(1);
    printf("%d\n",ans);
  }
  return 0;
}
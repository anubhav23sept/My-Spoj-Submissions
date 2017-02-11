/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long int dp[1002][1002];
int l,arr[1004];
string str;
long long int func(int i,int to)
{
 // cout<<i<<" "<<to<<endl;
  long long int a=0,b=0;
  if(i==l)
  {
    if(to==0)
      return 1;
    else
      return 0;
  }
  if(dp[i][to]==-1)
  {
    if(str[i]==')')
    {
      if(to>0)
       a=func(i+1,to-1);
      if((arr[i-1]-to)>0)
       b=func(i+1,to); 
    }
    else
    {
      a=func(i+1,to+1);
      b=func(i+1,to);
    }
    dp[i][to]=(a+b)%mod;
  }
  return dp[i][to];
}
int main()
{
  int t,i,j;
  scanf("%d",&t);
  while(t--)
  {
  memset(dp,-1,sizeof(dp));
  cin>>str;
  l=str.length();
  arr[0]=1;
  for(i=1;i<l;++i)
  {
    if(str[i]=='(')
      arr[i]=arr[i-1]+1;
    else
      arr[i]=arr[i-1]-1;
  }
  printf("%lld\n",func(0,0));
  }
  return 0;
}



/*  Anubhav Singh
		MNNIT Allahabad
		CSE
		 */
#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,l,arr[1003],dp[1003][2004];
vector<pair<int,int> > v[1002];
int dfs(int node,int diff)
{
   int mini=1e+8;
  if(arr[node]==0)
    diff++;
  else
  	diff--;
  if(node==n)
  {
    if(diff>998 && diff<1002)
    	mini=0;
    return mini;
  }
  if(dp[node][diff]==-1)
  {
  int i,l;
  l=v[node].size();
  for(i=0;i<l;++i)
     mini=min(mini,v[node][i].second+dfs(v[node][i].first,diff));       
   dp[node][diff]=mini;
  }
  return dp[node][diff];
}
int main()
{
	int i;
	scanf("%d %d",&n,&m);
	memset(dp,-1,sizeof(dp));
	for(i=0;i<m;++i)
	 {
	 	scanf("%d %d %d",&a,&b,&l);
        v[a].push_back(make_pair(b,l));
	 }
	for(i=1;i<=n;++i)
		scanf("%d",&arr[i]);
    i=dfs(1,1000);
    if(i==1e+8)
    	i=-1;
    printf("%d",i);
	return 0;
}



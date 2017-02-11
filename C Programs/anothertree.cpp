/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
vector<int> v[200003];
int fre[200003];
int dfs(int node,int parent)
{
  int i,a=0;
  for(i=0;i<v[node].size();++i)
  {
    if(v[node][i]!=parent)
       a+=dfs(v[node][i],node);
  }
  if(a>0)
    return a+1;
  else if(fre[node])
    return 1;
  else
    return 0;
}
int main()
{
  int n,i,a,b,q,k;
  scanf("%d",&n);
  for(i=1;i<n;++i)
  {
    scanf("%d %d",&a,&b);
    v[a].push_back(b);
    v[b].push_back(a);
  }
  scanf("%d",&q);
  while(q--)
  {
    memset(fre,0,sizeof(fre));
    scanf("%d",&k);
    for(i=0;i<k;++i)
    {
      scanf("%d",&a);
      fre[a]++;
    }
    i=dfs(a,-1);
    if(i)
      --i;
    printf("%d\n",i);
  }
  return 0;
}
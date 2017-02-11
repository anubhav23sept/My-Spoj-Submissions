/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int n,m,k,costo[21],cost[21][21],rating[21][21];
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;++i)
      scanf("%d",&costo[i]);
    for(i=0;i<n;++i)
      for(j=0;j<m;++j)
        scanf("%d",&cost[i][j]);
  }
  return 0;
}



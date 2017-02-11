/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
vector<int> v[50003];
set < pair<int,int> > s;
int main()
{
  set < pair<int,int> >::iterator it;
  int t,n,a,b,l,j,i,p[50003];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
      scanf("%d",&p[i]);
      s.insert(make_pair(p[i],i));
    }
    for(i=1;i<n;++i)
      {
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
      }   
    for(i=1;i<=n;++i)
    {
      l=v[i].size();
      s.erase(make_pair(p[i],i));
      for(j=0;j<l;++j)
         s.erase(make_pair(p[v[i][j]],v[i][j]));
       it=s.end();
      printf("%d ",(*(--it)).second);
      s.insert(make_pair(p[i],i));
      for(j=0;j<l;++j)
         s.insert(make_pair(p[v[i][j]],v[i][j]));
    }
    printf("\n");
    for(i=1;i<=n;++i)
     v[i].clear();
    s.clear();
  }
  return 0;
}



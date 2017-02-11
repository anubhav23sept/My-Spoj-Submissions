/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,q,n,a,count;
  vector <pair<int,int> > v;
  scanf("%d",&q);
  while(q--)
  {
    count=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
      scanf("%d",&a);
      v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    --i;
    a=n;
    while(v[i].second!=0)
    {
      if(v[i].second<a)
      {
        count++;
        a=v[i].second;
      }
      --i;
    }
    if(count%2)
      printf("ANDY\n");
    else
      printf("BOB\n");
    v.clear();
  }
  return 0;
}




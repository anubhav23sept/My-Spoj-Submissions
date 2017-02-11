/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,t,n,arr[1003],ans,p;
  set<int> s;
  set<int>::iterator it;
  scanf("%d",&t);
  while(t--)
  {
    ans=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
      scanf("%d",&arr[i]);
    for(i=0;i<n;++i)
    {
      for(j=i;j<n;++j)
      {
         s.insert(arr[j]);
         k=0;
         p=0;
         while(k<n)
         {
          if(k!=i)
          {
            it=s.find(arr[k]);
            if(it!=s.end())
            {
              ans+=(p*(p+1))/2;
              p=0;
            }
            else
              p++;
          }
          if(k==i)
          {
              ans+=(p*(p+1))/2;
              p=0;
              k=j+1;
           }
           else
           ++k;
         }
       ans+=(p*(p+1))/2;  
      }
      s.clear();
    }
    printf("%d\n",ans/2);
  }
  return 0;
}



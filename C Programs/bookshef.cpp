#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   int i,temp,n,m,a,b,arr[100003]={0};
   vector <pair <int,pair<int ,string> > > v;
   scanf("%d %d",&n,&m);
   while(n--)
   {
    scanf("%d",&a);
    arr[a]++;
   }
   while(m--)
   {
       scanf("%d %d",&a,&b);
       cin>>str;
       if(arr[a]!=0)
        a=-1;
        v.push_back(make_pair(a,make_pair(b,str)));
   }
   sort(v.begin(),v.end());
   for(i=v.size()-1;i>=0;--i)
   {

       if(v[i].first==-1)
        cout<<v[i].second.second<<"\n";
        temp=v[i].first;
        v[i].first=v[i].second.first;
        v[i].second.first=temp;
   }
   sort(v.begin(),v.end());
   for(i=v.size()-1;i>=0;--i)
    {
        if(v[i].second.first!=-1)
          cout<<v[i].second.second<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector < pair<pair<int,int> ,pair<int,int> > > v;
    vector <pair<int,int> > v2;
    int  x,y,n,m,a,b,i,vx,vy;
    long long int t1,t;
    scanf("%d %d %d",&x,&y,&n);
    while(n--)
    {
        scanf("%d %d %d %d",&a,&b,&vx,&vy);
       v.push_back(make_pair(make_pair(a,b),make_pair(vx,vy)));
    }
    scanf("%d",&m);
    while(m--)
    {
        scanf("%lld",&t1);
       for(i=0;i<v.size();++i)
       {
        t=t1%(2*x);
        if(v[i].second.first>0)
        {
          if(t<=(x-v[i].first.first))
            a=v[i].first.first+t;
          else if(t>(x-v[i].first.first) && t<=(2*x-v[i].first.first))
            a=2*x-(v[i].first.first)-t;
          else
            a=(v[i].first.first)+t-2*x;
        }
        else
        {
          if(t<=v[i].first.first)
            a=(v[i].first.first)-t;
          else if(t>v[i].first.first && t<=(x+v[i].first.first))
            a=t-v[i].first.first;
          else
            a=2*x-t+v[i].first.first;
        }
        t=t1%(2*y);
          if(v[i].second.second>0)
        {
          if(t<=(y-v[i].first.second))
            b=v[i].first.second+t;
          else if(t>(y-v[i].first.second) && t<=(2*y-v[i].first.second))
            b=2*y-(v[i].first.second)-t;
          else
            b=(v[i].first.second)+t-2*y;
        }
        else
        {
          if(t<=v[i].first.second)
            b=(v[i].first.second)-t;
          else if(t>v[i].first.second && t<=(y+v[i].first.second))
            b=t-v[i].first.second;
          else
            b=2*y-t+v[i].first.second;
        }
        v2.push_back(make_pair(a,b));
       }
       sort(v2.begin(),v2.end());
       for(i=0;i<v2.size();++i)
        printf("%d %d\n",v2[i].first,v2[i].second);
        printf("\n");
        v2.clear();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s1,s2;
  int t,h1,m1,h2,m2,a,b,i,ans1,ans2,ans;
  scanf("%d",&t);
  while(t--)
  {
    cin>>s1;
    cin>>s2;
   for(i=0;i<s1.length();++i)
    {
      if(i==0)
        h1=(s1[i]-'0');
      else if(i==1)
        h1=(h1*10)+(s1[i]-'0');
      else if(i==3)
        m1=(s1[i]-'0');
      else if(i==4)
        m1=(m1*10)+(s1[i]-'0');
      else if(i==6)
        s1[i]=='a'?(a=1):(a=2);
        if(a==1)
        {
           if(h1!=12)
            h1=(h1*60)+m1;
           else
            h1=m1;
        }
        else
        {
           h1+=12*60;;
           if(h1!=12)
            h1+=((h1*60)+m1);
           else
            h1+=m1;
        }
    }
    for(i=0;i<s2.length();++i)
    {
      if(i==0)
        h2=(s2[i]-'0');
      else if(i==1)
        h2=(h2*10)+(s2[i]-'0');
      else if(i==3)
        m2=(s2[i]-'0');
      else if(i==4)
        m2=(m2*10)+(s2[i]-'0');
      else if(i==6)
        s2[i]=='a'?(b=1):(b=2);
        if(b==1)
        {
           if(h2!=12)
            h2=(h2*60)+m2;
           else
            h2=m2;
        }
        else
        {
           h2+=12*60;;
           if(h2!=12)
            h2+=((h2*60)+m2);
           else
            h2+=m2;
        }
    }
    if((h1<12*60 && h2<12*60) || (h2>=12*60 && h1>=12*60))
    {
      ans1=(abs(h2-h1)/60)+(abs(h2-h1)%60);
      ans2=(abs(h2-h1)/60+1)+(60-(abs(h2-h1)%60));
      /*if(h1<=h2 && (((h1+(abs(h2-h1)/60+1)*60)>=12*60 && h1<12*60) || ((h1+(abs(h2-h1)/60+1)*60)>=24*60 && h1>=12*60)) && a==b)
        ans2++;
      if(h1>h2 && (((h2+(abs(h2-h1)/60+1)*60)>=12*60 && h1<12*60) || ((h2+(abs(h2-h1)/60+1)*60)>=24*60 && h1>=12*60)) && a==b)
        ans2++;*/
      ans=min(ans1,ans2);
    }
    else if(h1<12*60 && h2>=12*60)
    {
      ans1=(abs(h2-h1)/60)+(abs(h2-h1)%60);
      ans2=(abs(h2-h1)/60+1)+(60-(abs(h2-h1)%60));
    }
  }
  return 0;
}

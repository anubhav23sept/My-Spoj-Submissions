#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
char str[100002],c;
int al;
long long int arr1[100002],arr2[100002],arr3[100002];
long long int func(int i,int pre,int ppre,int pre2,int ppre2)
 {
     long long int a=0;
    if(i==al-2)
        return 4;
    if(str[i]=='1')
     {
          if((pre==2 && ppre!=2) || (pre2==2 && ppre2!=2))
             return 0;
          if(arr1[i]==-1)
             arr1[i]=func(i+1,1,pre,1,pre2);
        return (2*arr1[i])%mod;
     }
    else if(str[i]=='2')
    {
      if(pre==1 || pre==-1)
      {
        if((pre2==2 && ppre2==2) || i==al-3)
          return 0;
        if(arr2[i]==-1)
          arr2[i]=func(i+1,2,pre,2,pre2);
        return (2*arr2[i])%mod;
     }
      if(ppre==2 || (pre2==2 && ppre2==2) || (i==al-3 && abs(pre2)==1))
         return 0;
      if(arr3[i]==-1)
         arr3[i]=func(i+1,2,pre,2,pre2);
        return (2*arr3[i])%mod;
    }
    else
     {
       if((pre==2 && ppre!=2) || (pre2==2 && ppre2==2) || (i==al-3 && abs(pre2)==1))
         a=0;
       else if(arr1[i]==-1)
         a=arr1[i]=func(i+1,1,pre,2,pre2);
       if(pre==1 || pre==-1)
      {
          if((pre2==2 && ppre2!=2) || i==al-3)
             a+=0;
          else if(arr2[i]==-1)
          {
             arr2[i]=func(i+1,2,pre,1,pre2);
             a=(a+arr2[i])%mod;
          }
        return a;
      }
          if(ppre==2 || (pre2==2 && ppre2!=2))
             a+=0;
          else if(arr3[i]==-1)
          {
             arr3[i]=func(i+1,2,pre,1,pre2);
             a=(a+arr3[i])%mod;
          }
        return a;
     }
 }
int main()
{
    int t,i;
    long long int ans;
    scanf("%d",&t);
    while(t--)
    {
      memset(arr1,-1,sizeof(arr1));
      memset(arr2,-1,sizeof(arr2));
      memset(arr3,-1,sizeof(arr3));
      cin>>str;
      al=strlen(str);
      for(i=0;i<al;++i)
      {
         cin>>c;
         if(c!=str[i])
          str[i]='0';
      }
      cin.ignore();
      if(al==1)
        ans=2;
      else if(str[al-2]!='1')
        ans=0;
      else
        ans=func(0,-1,-1,-1,-1);
        printf("%lld\n",ans);
    }
    return 0;
}

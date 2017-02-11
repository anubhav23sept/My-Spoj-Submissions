/*  Anubhav Singh
    MNNIT Allahabad
    CSE
     */
#include<bits/stdc++.h>
using namespace std;
int arr[1000004],arr2[1000004];
void seive()
{
  int i,j,k=0;;
  arr[1]=1;
  for(i=2;i<=1000004;++i)
  {
    if(!arr[i])
    {
      arr2[k++]=i;
      j=2;
      while(j*i<=1000004)
      {
        arr[j*i]=1;
        ++j;
      }
    }
  }
}
int main()
{
  long long ans[100004]={0},fac[100004];
  int i;
  long long j,k;
  long long l,r;
  double p;
  seive();
 // cout<<"a";
  scanf("%lld %lld %lf",&l,&r,&p);
  int l1=sqrt(r);
  for(i=0;i<=r-l;++i)
    fac[i]=i+l;
  i=0;
  while(arr2[i]<=l1)
  {
   //cout<<arr2[i]<<endl;
    k=l;
    if(l%arr2[i]==0)
      k-=arr2[i];
    for(j=k+(arr2[i]-(l%arr2[i]));j<=r;j+=arr2[i])
    {
      if(arr2[i]>sqrt(j))
        continue;
      //cout<<fac[j-l]<<" "<<arr2[i]<<endl;
        while((fac[j-l]%arr2[i])==0)
        {
          fac[j-l]/=arr2[i];
          ans[j-l]++;
         // cout<<fac[j-l]<<" "<<arr2[i]<<endl;
        }
    }
    i++;
  }
  k=0,j=0;
  for(i=0;i<=r-l;++i)
  {
    if(ans[i]!=0)
    {
      k++;
      if(fac[i]!=1)
       j+=(ans[i]+1);
      else
       j+=ans[i];
    }
  }
  double a;
   if(k!=0)
     a=p+(((double)j/k)*(1-p));
   else
     a=p;
  printf("%lf",a);
  return 0;
}
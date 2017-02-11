#include<bits/stdc++.h>
int arr[505];
int main()
{
  int n,k,i,sum=0;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;++i)
    scanf("%d",&arr[i]);
  for(i=0;i<n-1;++i)
  {
     if(arr[i+1]+arr[i]<k)
     {
      sum+=(k-arr[i+1]-arr[i]);
      arr[i+1]+=(k-arr[i+1]-arr[i]);
     }
  }
  printf("%d\n",sum);
  for(i=0;i<n;++i)
    printf("%d ",arr[i]);
    return 0;
}

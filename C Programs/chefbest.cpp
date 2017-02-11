/*  Anubhav Singh
		MNNIT Allahabad
		CSE
		 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count,pre,cur,t,n,arr[100002],i,dp[100002];
	scanf("%d",&t);
	while(t--)
	{
		memset(dp,0,sizeof(dp));
		scanf("%d",&n);
		for(i=0;i<n;++i)
		  scanf("%d",&arr[i]);
		pre=n,count=0;
		for(i=n-1;i>=0;--i)
		{
			if(arr[i])
			{
				n=i+1;
				break;
			}
		}
        if(i<0)
        	n=0;
		for(i=n-1;i>=0;--i)
		{
		  if(!arr[i] && count==0)
		  {
		  	pre=i;
		  	++count;
		  }
          else if(!arr[i])
          {
          	cur=i;
          	if(dp[pre]>=pre-cur-1)
          		dp[i]=dp[pre]-pre+cur+2;
          	pre=i;
          } 
		}
		count=0;
		for(i=0;i<n;++i)
		{
			if(!arr[i])
				count++;
		}
		if(count==0)
		printf("0\n");
	    else
		printf("%d\n",n-count-pre+dp[pre]);
	}
	return 0;
}



#include<cstdio>
#include<algorithm>
int main()
{
 int t,n,arr[502][502],i,j,a=500,b=500;
 long int ans;
 scanf("%d",&t);
 while(t--)
 {
     a=500,b=500;
     ans=0;
     scanf("%d",&n);
     for(i=0;i<n;++i)
        for(j=0;j<n;++j)
        {
          scanf("%d",&arr[i][j]);
          if(arr[i][j]==5)
            a=i,b=j;
        }
    if(a>499 || b>499)
        printf("-1\n");
    else
        {
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
          if(arr[i][j]==1)
           ans+=(abs(a-i)+abs(b-j));
        }
    }
    printf("%ld\n",ans);
        }
 }

    return 0;
}

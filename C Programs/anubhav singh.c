#include<stdio.h>
#include<math.h>
int k,n,b,arr[40];
int SQRBR(int i,int ob,int o)
{
    int c=0,d=0;
   if(arr[i]!=0)
   {
       b=k-arr[i]+1;
    c=SQRBR(i+1,ob+1,o+1);
   }
   else if(ob+1+k-b>n)
    return 1;
   else
    {
    c=SQRBR(i+1,ob+1,o+1);
    if(o!=0 && i!=(2*n))
     d=SQRBR(i+1,ob,o-1);
    }
    return c+d;
}
int main()
{
    int i,j,t,a;
    scanf("%d",&t);
    for(i=0;i<t;++i)
    {
     memset(arr,0,sizeof(arr));
     scanf("%d %d",&n,&k);
      for(j=k;j>0;--j)
      {
          scanf("%d",&a);
          arr[a]=j;
      }
      if(arr[1]==0)
        b=0;
        else
        b=1;
      a=0;
      for(j=2*n;j>0;--j)
      {
          if(a<arr[j])
          break;
         if(arr[j]==0)
         a++;
      }
      if(j==0)
        a=SQRBR(2,1,1);
          else
        a=0;
        printf("%d\n",a);
    }
    return 0;
}

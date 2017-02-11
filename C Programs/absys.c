#include<stdio.h>
int min(int a,int b)
{
    if(a<b)
        return  a;
    else
        return b;
}

int main()
{
   int t,i,n,j,k,a,b,x,min,arr[100],arr2[100],arr3[100];
   scanf("%d",&t);
       for(i=0;i<t;++i)
       {
           scanf("%d",&n);
           for(j=0;j<n;++j)
            scanf("%d",&arr[j]);
            k=n;
            while(k>3)
        {
       for(j=0;j<k-1;++j)
        arr2[j]=(arr[j]+arr[j+1])%100;
       for(j=0;j<k-1;++j)
       {
         if(j==0 && j==k-3)
            arr3[j]=arr2[j]*arr[j+2];
         else if(j==0)
            arr3[j]=min(arr2[j]*arr2[j+2],arr2[j]*arr[j+2]);
         else if(j==k-1)
            arr3[j]=arr2[j]*arr[j-1] ;
         else if(j==k-2)
            arr3[j]=min(arr2[j]*arr[j-1],arr2[j]*arr[j+2]);
         else
            arr3[j]=min(min(arr2[j]*arr2[j+2],arr2[j]*arr[j+2]),arr2[j]*arr[j-1]);
       }
       min=arr3[0],a=0;
       for(j=0;j<k-1;++j)
       {
           if(arr3[j]<min)
            min=arr3[j],a=j;
       }
       j=0,x=0;
       while(j<k-1)
       {
        if(b==1 && j==a)
            arr[x]=(arr2[j]+arr[j+=2])%100;
        else if(b==2 && j==a)
        {
            arr[x++]=arr2[j];
            arr[x]=arr2[j+=2];
            ++j
        }
        else if(b==3 && j==a-1)
            arr[x]=(arr[j]+arr2[j+1])%100,j+=2;
        else
            arr[x]=arr[j];
        ++x,++j;
       }
       k-=2;
        }
          }
    return 0;
}

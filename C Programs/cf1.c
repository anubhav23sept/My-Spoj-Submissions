#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,t,sum1,sum2,ans;
    char str1[40],str2[40];
    scanf("%d",&t);
    while(t--)
    {
        sum1=0,sum2=0;
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%*c");
    for(i=0;i<strlen(str1);++i)
       sum1+=(str1[i]-'0');
    for(i=0;i<strlen(str2);++i)
       sum2+=(str2[i]-'0');
      // printf("%d %d ",sum1,sum2);
    ans=((sum1%9)*(sum2%9))%9;
    printf("%d\n",ans);
    }
    return 0;
}

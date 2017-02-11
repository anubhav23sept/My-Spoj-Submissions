#include<stdio.h>
int main()
{
    int t,i,a,h,count;
    scanf("%d",&t);
    for(i=0;i<t;++i)
    {
        count=0;
        scanf("%d %d",&h,&a);
        if(h/2<=a/8)
          count=2*(h/2+h%2)-1;
          else
            {
                h=2*(h/2-a/8)+(h%2);
                 count=2*(a/8);
                a=a%8;
                while(1)
                {
                    h-=17,a+=7;
                    count+=2;
                    if(h<=0 || a<=0)
                        break;
                    if(a<=8)
                    {
                        h-=17,a+=7;
                    count+=2;
                    if(h<=0 || a<=0)
                        break;
                    }
                    h-=2,a-=8;
                     count+=2;
                    if(h<=0 || a<=0)
                        break;
                                   }
                count--;
            }
            printf("%d\n",count);
                 }

    return 0;
}

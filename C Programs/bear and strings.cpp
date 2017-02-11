#include<bits/stdc++.h>
char str[10000002],pattern[102];
int fre[30],frepattern[30];
int main()
{
 int x,n,i,l,count=0,a=0;
 scanf("%s",str);
 l=strlen(str);
 for(i=0;i<l;++i)
    fre[str[i]-'a']++;
 scanf("%d",&n);
 while(n--)
 {
   scanf("%s",pattern);
   a=0;
   for(i=0;i<30;++i)
    frepattern[i]=0;
   l=strlen(pattern);
   for(i=0;i<l;++i)
   {
    if(pattern[i]>='a' && pattern[i]<='z')
     frepattern[pattern[i]-'a']++;
    else
     a=1;
   }
   for(i=0;i<26;++i)
   {
     if(frepattern[i]>fre[i])
        break;
   }
   if(i==26 && a==0)
    count++;
 }
   printf("%d",count);
 return 0;
}

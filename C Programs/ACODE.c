#include<stdio.h>
#include<string.h>
int main()
{int i,j,s[1000],n;
char a[1000];
while(1)
{printf("Enter your coded version of string:\n");
gets(a);
n=strlen(a);
if(a[0]=='0')
{
     printf("Wrong Code\n");
return 0;
}
else
s[0]=1;
if(((a[0]-48)*10+(a[1]-48))<=26)
{if(a[1]=='0')
s[1]=1;
else
s[1]=2;}
else
 {if(a[1]=='0')
 {printf("Wrong Code\n");
return 0;}
else
 s[1]=1;}
for(i=2;a[i]!='\0';i++)
{if(((a[i-1]-48)*10+(a[i]-48))<=26)
{if(a[i]=='0')
{if(a[i-1]=='0')
 {printf("Wrong Code\n");
return 0;}
else
s[i]=s[i-2];}
else
{if(a[i-1]=='0')
s[i]=s[i-1];
else
s[i]=s[i-1]+s[i-2];}}
else
{if(a[i]=='0')
{printf("Wrong Code\n");
return 0;}
else
s[i]=s[i-1];
}}
printf("The total number of possible words are:\n%d",s[n-1]);
return 0;
}}

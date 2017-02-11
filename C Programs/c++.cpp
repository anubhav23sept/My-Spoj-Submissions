#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
  int arr[26]={0},a[26][10004]={0},i,j,n=0,k=-1,b,c;
  char str[10004],str1[5003],ch;
  cin>>str;
  i=0,j=strlen(str)-1;
  while(i<j)
  {
   ch=str[i];
   str[i]=str[j];
   str[j]=ch;
   ++i,--j;
  }
  for(i=strlen(str)-1;i>=0;--i)
   arr[str[i]-97]++;
  for(i=0;i<26;++i)
  {
      arr[i]/=2;
      n+=arr[i];
  }
  for(i=strlen(str)-1;i>=0;--i)
  {
  for(j=0;j<26;++j)
  {
      if(str[i]==j+97)
        a[j][i]=a[j][i+1]+1;
      else
        a[j][i]=a[j][i+1];
  }
  }
  for(i=0;i<n;++i)
  {
    b=(++k);
    for(j=0;j<26;++j)
    {
       k=b,c=0;
      while(k<strlen(str))
      {
       if(str[k]==j+97 && arr[str[k]-97]>0)
       {
       for(c=0;c<26;++c)
       {
        if(a[c][k]>=arr[c])
            continue;
        else
            break;
       }
       break;
       }
       else
            k++;
      }
      if(c==26)
      {
       arr[str[k]-97]--;
       str1[i]=j+97;
       break;
      }
  }
  }
  cout<<str1;
return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
     int i,j,k,n,arr[2][4]={0};
     char str[500003];
     cin>>n;
     cin>>str;
     for(i=0;i<strlen(str);++i)
     {
        if(str[i]=='A')
            arr[0][0]++;
        else if(str[i]=='G')
            arr[0][1]++;
        else if(str[i]=='C')
            arr[0][2]++;
        else if(str[i]=='T')
            arr[0][3]++;
     }
     for(i=0;i<4;++i)
        arr[0][i]-=n/4
     i=0;
     while(str[])
    while(j<strlen(str))
    {
        for(k=0;k<4;++k)
        {
            if(arr[1][i]<arr[0][i])
                break;
        }
        if(k==4)
            ++i;
        else
            ++j;
    }
  return 0;
}

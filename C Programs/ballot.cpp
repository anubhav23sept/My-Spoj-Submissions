#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
long int s[2][500002];
int main()
{
    long int b,a[500002],max;
    int i,n;
    while(1)
    {
    cin>>n>>b;
    if(n==-1 || b==-1)
        break;
    for(i=0;i<n;++i)
      s[1][i]=1;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
        s[0][i]=a[i];
    }
    b-=n;
    max=0;
    while(b>0
    {
        for(i=0;i<n;++i)
        {
         if(s[0][i]>s[0][max])
                max=i;
        }
    if((a[max]%(s[1][max]+1))==0)
      s[0][max]=a[max]/(++s[1][max]);
    else
      s[0][max]=(a[max]/(++s[1][max]))+1;
     b--;
    }
    for(i=0;i<n;++i)
        {
         if(s[0][i]>s[0][max])
                max=i;
        }
    cout<<s[0][max]<<"\n";
    }
    return 0;
}

#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,t,ar1[100005],ar2[100005],start,ende,mid,mini,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ar1[i];
        cin>>m;
        for(i=0;i<m;i++)
            cin>>ar2[i];
        mini=ar2[m-1]-ar1[0];
        for(i=0;i<n;i++)
        {
            start=0;
            ende=m-1;
            while(start<=ende)
            {
                mid=(start+ende)/2;
                mini=min(mini,abs(ar2[mid]-ar1[i]));
                if(ar2[mid]<ar1[i])
                {
                    start=mid+1;
                    continue;
                }
                if(ar2[mid]>=ar1[i])
                {
                    ende=mid-1;
                    continue;
                }
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}

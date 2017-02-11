/*
    Shakti Mani Tripathi
    B.Tech 2nd Year Electrical Engineering
    Handle ID: smtcoder
    MNNIT Allahabad
*/
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mem(x,y) memset(x,y,sizeof(x))
#define lli long long
#define li long
#define mapii map<int,int>
#define mapllii map<long long int,int>
#define mapilli map<int,long long int>
#define mapllilli map<long long int,long long int>
#define vi vector <int>
#define vlli vector <long long int>
#define pii pair<int,int>
#define pilli pair<int,long long int>
#define pllii pair<long long int int,int>
#define pllilli pair<long long int,long long int>
#define vppiii vector<pair<int,pair<int,int> > >
#define vpii vector<pair<int,int> >
#define vpipii vector<pair<int,pair<int,int> > >
#define vpipilli vector<pair<int,pair<int,long long int> > >
#define ch char
#define frp(x,y,z) for(x=y;x<z;x++)
#define frm(x,y,z) for(x=y;x>z;x--)
#define mmax 10000000009
#define mmin -1000000009
#define pr printf
#define mod 1000000007
#define gc getchar
using namespace std;
void sc(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
lli power(lli a,lli b)
{
    lli res=1;
    while(b>0)
    {
        if(b%2==1)
            res=res*a;
        a=a*a;
        b/=2;
    }
    return res;
}
int main()
{
    int i;
    lli n;
    while(scanf("%lld",&n)!=EOF)
    {
        lli num=n,count=0;
        while(num>0)
        {
            num/=10;
            count++;
        }
        num=n;
        lli ans=0;
        frp(i,0,count)
        {
            ans+=power(num%10,count);
            num/=10;
        }
        if(ans==n)
        {
            pr("True\n");
        }
        else cout<<"False"<<endl;
    }
    return 0;
}
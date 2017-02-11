#include<bits/stdc++.h>
int tree[200003],arr[100002];
void build(int node,int start,int en)
{
    if(start==en)
     {
        if((arr[start]&1)==0)
            tree[node]++;
     }
    else
     {
       int mid=(start+en)/2;
       build(2*node+1,start,mid);
       build(2*node+2,mid+1,en);
       tree[node]=tree[2*node+1]+tree[2*node+2];
     }
}
void update(int node,int start,int en,int index,int value)
{
    if(start==en)
    {
      arr[start]=value;
      tree[node]=(tree[node]^1);
    }
    else
    {
      int mid=(start+en)/2;
      if(start<=index && index<=mid)
        update(2*node+1,start,mid,index,value);
      else
        update(2*node+2,mid+1,en,index,value);
      tree[node]=tree[2*node+1]+tree[2*node+2];
    }
}
int query(int node,int start,int en,int l,int r,int a)
{
    if(l<=start && r>=en)
    {
        if(a==1)
          return tree[node];
        else
          return (en-start+1-tree[node]);
    }
   if(r<start || en<l)
      return 0;
   int mid=(start+en)/2;
   return query(2*node+1,start,mid,l,r,a)+query(2*node+2,mid+1,en,l,r,a);
}
int main()
{
  int n,q,i,j,k;
  scanf("%d",&n);
  for(i=0;i<n;++i)
    scanf("%d",&arr[i]);
  build(0,0,n-1);
  scanf("%d",&q);
  while(q--)
  {
   scanf("%d %d %d",&i,&j,&k);
   if(i==1 || i==2)
        printf("%d\n",query(0,0,n-1,j-1,k-1,i));
   else
   {
      if((arr[j-1]&1)==(k&1))
        arr[j-1]=k;
      else
       update(0,0,n-1,j-1,k);
   }
  }
  return 0;
}

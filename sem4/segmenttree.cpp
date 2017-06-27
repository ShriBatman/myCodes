#include<bits/stdc++.h>

using namespace std;

const int n=6;
int b[2*(n)+2+1]={0};

void construct(int a[],int node,int start,int low)
{
	if(start==low)
	b[node]=a[start];
	else
	{
		int mid=(start+low)/2;
		construct(a,2*node+1,start,mid);
		construct(a,2*node+2,mid+1,low);
		b[node]=b[2*node+2]+b[2*node+1];
	}
}

int query(int node,int start,int low,int l,int r)
{
	int mid,x,y;
	
	if(l>low || r<start)
	return 0;
	else if(l<=start && r>=low)
	return b[node];
	else
	{
		mid=(start+low)/2;
		x=query(2*node+1,start,mid,l,r);
		y=query(2*node+2,mid+1,low,l,r);
		return (x+y);
	}
}

int main()
{
	int i,j,k,l,m,r,t;
	int a[]={1,8,4,2,11,3};
	
	construct(a,0,0,n-1);
	
	for(i=0;i<2*n+2+1;i++)
	cout<<b[i]<<endl;
	
	cin>>l>>r;
	
	k=query(0,0,n-1,l,r);
	cout<<k<<endl;
	
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,x,y;
	cin>>r>>n>>k;
	
	vector<long long int>a(k,0);
	
	t=r;
	y=0;
	if(r==0 || n==0)
	{
		for(i=0;i<k;i++)
	{
		cout<<a[i]<<" ";
	}
	}
	else
	{
	while(1)
	{
		x=t%(n+1);
		a[y]=x;
		y++;
		t=t/(n+1);
		
		if(t==0 || y==k)
		break;
	}
	
	for(i=0;i<k;i++)
	{
		cout<<a[i]<<" ";
	}
	}
	
	
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t,x,y,z;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		
		vector< vector<int> > a;
		
		for(j=0;j<n;j++)
		{
			vector<int> b;
			for(z=0;z<2;z++)
			{
				cin>>l;
				b.push_back(l);
			}
			a.push_back(b);
		}
		/*
		for(z=0;z<n;z++)
		{
			for(j=0;j<2;j++)
			cout<<a[z][j]<<endl;
		}
		*/
		
		r=0;
		x=0;
		int u=0;
		int q=1;
		for(z=0;z<n;z++)
		{
			if(r<k)
			{
				r=r+a[z][0];
			}
			if(r>k)
			{
				//cout<<r;
				if(q==1)
				{
					//cout<<"sds";
					y=(r-k)*a[z][1];
					q=0;
				}
				else
				x=x+(a[z][0]*a[z][1]);
			}
			else if(r==k)
			{
				if(u==1 || k==0)
				x=x+(a[z][1]*a[z][0]);
				
				u=1;
			}
			
		}
		
		if(q==0)
		cout<<x+y<<endl;
		else
		cout<<x<<endl;
		
	}
	return 0;
}

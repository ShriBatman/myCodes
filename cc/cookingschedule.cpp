#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t,x,y,z;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		string a;
		cin>>n>>k;
		cin>>a;
		
		vector<int> b;
		r=1;
		for(j=0;j<n-1;j++)
		{
			if(a[j]==a[j+1])
			{
				r++;
			}
			else
			{
				b.push_back(r);
				r=1;
				if(j==n-2)
				b.push_back(r);
			}
		}
		
		if(r!=1)
		b.push_back(r);
		
		for(j=0;j<k;j++)
		{
		sort(b.rbegin(),b.rend());
		z=b[0];
		
		if(z==1)
		{
			cout<<z<<endl;
		}
		else if()
		{
			
		}
		else
		{
			
			if(z%2!=0)
			{
				
				
			}
			else if(z%2==0 && z!=2)
			{
				
			}
			
		}
		}
	}
	return 0;
}

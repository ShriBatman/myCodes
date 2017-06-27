#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		vector<int> a;
		vector<int> b(n);
		
		for(j=0;j<m;j++)
		{
			cin>>l;
			a.push_back(l);
			b[a[j]-1]=1;
		}
		
		r=0;
		for(j=0;j<n;j++)
		{
			if(b[j]==1)
			continue;
			else
			{
				if(r==0)
				{
				b[j]=1;
				r=1;
				cout<<j+1<<"\t";
				}
				else
				r=0;
			}
		}
		cout<<endl;
		for(j=0;j<n;j++)
		{
			if(b[j]==1)
			continue;
			else
			{
				cout<<j+1<<"\t";
			}
		}
		cout<<endl;
		
	}
	
	return 0;
}

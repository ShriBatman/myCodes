#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<int> a;
		vector<int> b;
		
		for(j=0;j<n;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		for(j=0;j<n;j++)
		{
			cin>>l;
			b.push_back(l);
		}
		
		k=0;
		r=0;
		for(j=0;j<n;j++)
		{
			if(j%2==0)
			{
				k=k+a[j];
				r=r+b[j];
			}
			else
			{
				k=k+b[j];
				r=r+a[j];
			}
		}
		
		if(k<r)
		cout<<k<<endl;
		else
		cout<<r<<endl;
	}
	return 0;
}

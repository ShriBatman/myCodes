#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n,t;
	long long int k,m,r,s;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<long long int> a;
		vector<int> b;
		vector<int> c;
		
		for(j=0;j<n;j++)
		{
			long long int l;
			cin>>l;
			a.push_back(l);
		}
		
		for(j=0;j<n;j++)
		{
			m=a[j]/65536;
			b.push_back(m);
			
			k=a[j]-(m*65536);
			c.push_back(k);
		}
		
		cout<<"Case "<<i+1<<":"<<endl;
		for(j=0;j<n;j++)
		{
			cout<<c[j]<<"\t";
		}
		cout<<endl;
		for(j=0;j<n;j++)
		{
			cout<<b[j]<<"\t";
		}
		cout<<endl;
		
	}
	
	return 0;
}

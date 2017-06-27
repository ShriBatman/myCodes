#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,n,t;
	long long int l,m;
	cin>>t;
	
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<long long int> a;
		for(j=0;j<n;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		
		sort(a.begin(),a.end());
		m=a[n-1];
		
		for(j=1;j<n;j++)
		{
			if(a[j]-a[j-1]<m)
			{
				m=a[j]-a[j-1];
			}
		}
		cout<<m<<endl;
	}
	
	return 0;
}

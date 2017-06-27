#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
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
		
		cin>>k;
		r=a[k-1];
		
		sort(a.begin(),a.end());

		m=distance(a.begin(),find(a.begin(),a.end(),r));

		//m=binary_search(a.begin(),a.end(),r);
		cout<<m+1<<endl;
	}
	
	return 0;
}

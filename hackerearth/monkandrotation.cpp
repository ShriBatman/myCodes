#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		vector<long long int> a;
		
		for(j=0;j<n;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		
		if(k<=n){
		for(j=n-k;j<n;j++)
		cout<<a[j]<<" ";
		for(j=0;j<n-k;j++)
		cout<<a[j]<<" ";}
		else
		{
			k=k%n;
			for(j=n-k;j<n;j++)
			cout<<a[j]<<" ";
			for(j=0;j<n-k;j++)
			cout<<a[j]<<" ";
		}
		cout<<"\n";
		
	}
	return 0;
}

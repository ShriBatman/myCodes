#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int i,j,k,l,m,n,t,r;
	
	cin>>l>>r>>n;
	
	vector<long long int> a,b;
	
	for(i=0;i<n;i++)
	{
		cin>>t;
		cin>>m;
		
		a.push_back(t);
		b.push_back(m);
	}
	j=l;
	k=r;
	for(i=n-1;i>=0;i--)
	{
		j=j-a[i];
		k=k-b[i];
	}
	cout<<j<<" "<<k<<endl;
	
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int i,j,k,l,m,n,t,r;
	
	cin>>n;
	cin>>l>>r;
	vector<long long int> a;
	
	for(i=0;i<n;i++)
	{
		cin>>m;
		a.push_back(m);
	}
	
	sort(a.begin(),a.end());
	
	t=a[n-1];

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			t=a[j]-a[i];
		}
	}
	
	
	if(t<l)
	cout<<r-l+1<<endl;
	else if(t>r)
	cout<<"0"<<endl;
	else
	cout<<r-t<<endl;

	return 0;
} 

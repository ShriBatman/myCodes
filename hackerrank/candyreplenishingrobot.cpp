#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t;
	
	cin>>n>>t;
	
	vector<int> a;
	for(i=0;i<t;i++)
	{
		cin>>l;
		a.push_back(l);
	}
	
	k=0;
	r=n;
	for(i=0;i<t-1;i++)
	{
		r=r-a[i];
		if(r<5)
		{
			k=k+n-r;
			r=n;
		}
		//cout<<i<<r<<k<<endl;
	}
	
	cout<<k<<endl;
	
	
	return 0;
}

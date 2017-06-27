#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,l,m,n,t,r;
	long long int k;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<int> a;
		
		k=0;
		for(j=0;j<n;j++)
		{
			cin>>l;
			a.push_back(l);
			
			k=k*10+l;
			
		}
		
		cout<<k<<endl;		
	}
	return 0;
}

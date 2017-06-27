#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,q,k,l,m,n,r,t,a,b,c,d;
	
	cin>>n;
	vector<int> x;
	
	for(i=0;i<n;i++)
	{
		cin>>l;
		x.push_back(l);
	}
	
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>a>>b>>c>>d;
		
			k=0;
			for(i=a-1;i<c;i++)
			{
			for(j=b-1;j<d;j++)
			{
			k=k+(x[i]^x[j]);
			}
			}
			
			cout<<k<<endl;

	}
	
	return 0;
}

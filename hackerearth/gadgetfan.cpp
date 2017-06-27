#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int i,j,k,l,m,n,t,r;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		
		l=2*n;
		r=0;
		if(n%2!=0)
		{
			for(j=2;j<=k;j++)
			{
				if(j==(l+2)/2)
				r=r+1+n/2;
				else if(j<(l+2)/2)
				r=r+j/2;
				else if(j>(l+2)/2)
				r=r+(l+2-j)/2;
			}
		}
		else
		{
			for(j=2;j<=k;j++)
			{
				if(j==(l+2)/2)
				r=r+n/2;
				else if(j<(l+2)/2)
				r=r+j/2;
				else if(j>(l+2)/2)
				r=r+(l+2-j)/2;
			}
		}
		
		cout<<r<<endl;
	}
	return 0;
}

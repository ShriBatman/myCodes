#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int g,i,j,k,l,m,n,r,t;
	
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>g;
		for(j=0;j<g;j++)
		{
			cin>>m>>n>>r;
			if(n%2==0)
			{
				cout<<n/2<<endl;
			}
			else
			{
				if(m==r)
				{
					cout<<n/2<<endl;
				}
				else
				{
					cout<<n/2 +1<<endl;
				}
			}

		}
	}
	return 0;
}

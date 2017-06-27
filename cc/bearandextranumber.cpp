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
		
		sort(a.begin(),a.end());
		
		for(j=0;j<n-1;j++)
		{
			if(a[j]==a[j+1])
			{
				k=a[j];
				break;
			}
			else if(a[j+1]-a[j]!=1)
			{
				if(j!=n-2)
				{
					if(a[j+2]-a[j+1]!=1)
					k=a[j+1];
					else
					k=a[j];
				}
				else
				{
					if(a[j]-a[j-1]!=1)
					k=a[j];
					else
					k=a[j+1];
				}
				break;
			}
		}
		
		cout<<k<<endl;
	}
	return 0;
}

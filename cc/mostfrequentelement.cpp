#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,y;
	
	cin>>n;
	cin>>m;
	
	vector<long long int> a;
	
	for(i=0;i<n;i++)
	{
		cin>>y;
		a.push_back(y);
	}
	
	for(i=0;i<m;i++)
	{
		cin>>l;
		cin>>r;
		cin>>k;
		
		int t=1;
		int z=0;
		long long int x;
		
		if(l==r && (k==0 || k==1))
		{
			cout<<a[l-1]<<endl;
		}
		else
		{
		for(j=l-1;j<r-1;j++)
		{
			if(a[j]==a[j+1])
			{
				t++;
				if(t>=k)
				{
					x=a[j];
				   	z=1;
				   	
					break;
				}
			}
			else
			{
				t=1;
			}
		}
		

		if(z==1)
		{
			cout<<x<<endl;
			//cout<<z;
			//cout<<t;
		}
		else
		{
					cout<<"-1"<<endl;
				//	cout<<z;
			//cout<<t;

		}
		}
	}
	
	return 0;
}

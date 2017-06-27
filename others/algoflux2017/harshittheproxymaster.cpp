#include<bits/stdc++.h>

using namespace std;

long long int prime(long long int x)
{
	long long int r=0;
	
	if(x%2==0)
	{
	while(x%2 == 0)
    {
        x = x/2;
    }
    r=r+2;
	}
	
	for(int j=3;j<=sqrt(x);j=j+2)
		{
			if(x%j==0)
			{
				while(x%j==0)
				{
					x=x/j;
				}
				r=r+j;
			}
			if(x<j)
			break;
		}
		if(x!=1)
		{
			r=r+x;
		}
		
		return r;
}

long long int fun(int l,int r,long long int k,long long int a[])
{
	long long int q,ans=0;
	
	for(int i=l-1;i<r;i++)
	{
		q=prime(a[i]);
		if(q>k)
		{
			ans = ans + (i+1)*q;
		}
	}
	
	return ans;
}

int main()
{
	int i,j,l,m,n,q,r,t;
	
	cin>>n>>q;
	long long int a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	long long int k,x;
	for(i=0;i<q;i++)
	{
		cin>>l>>r>>k;
		
		x=fun(l,r,k,a);
		cout<<x<<endl;
	}
	
	
	return 0;
}

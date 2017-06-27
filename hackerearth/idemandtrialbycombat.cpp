#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t,s;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		vector<int> a;
		vector<int> b(n,0);
		
		k=0;
		for(j=0;j<n;j++)
		{
			cin>>l;
			if(l==0)
			k++;
			
			a.push_back(l);
		}
		
		s=m;
		if(k>0 && k<n){
		for(j=1;j<=m;j++)
		{
			k=0;
			if(j%2!=0)
			{
				for(r=0;r<n;r++)
				{
					if(r==0)
					{
						if(a[r+1]==1)
						b[r]=1;
						else
						{
							b[r]=0;k++;
						}
					}
					else if(r==n-1)
					{
						if(a[r-1]==1)
						b[r]=1;
						else
						{
							b[r]=0;k++;
						}
					}
					else
					{
						if(a[r+1]==1 && a[r-1]==1)
						b[r]=1;
						else
						{
							b[r]=0;k++;
						}
					}
				}
				
				if(k==0 || k==n)
				{
					s=j;
					break;
				}
			}
			else
			{
				for(r=0;r<n;r++)
				{
					if(r==0)
					{
						if(b[r+1]==1)
						a[r]=1;
						else
						{
							a[r]=0;k++;
						}
					}
					else if(r==n-1)
					{
						if(b[r-1]==1)
						a[r]=1;
						else
						{
							a[r]=0;k++;
						}
					}
					else
					{
						if(b[r+1]==1 && b[r-1]==1)
						a[r]=1;
						else
						{
							a[r]=0;k++;
						}
					}
				}
				
				if(k==0 || k==n)
				{
					s=j;
					break;
				}
				
			}
			
		}
		
		
		for(j=0;j<n;j++)
		{
			if(s%2==0)
			{
				cout<<a[j]<<" ";
			}
			else
			{
				cout<<b[j]<<" ";
			}
		}
		cout<<"\n";
		}
		else
		{
			for(j=0;j<n;j++)
			cout<<a[j]<<" ";
			
			cout<<"\n";
		}
		
	}
	return 0;
}

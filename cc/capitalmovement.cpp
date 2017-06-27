#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,e,n,t,r;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<long long int> pop;
		vector< vector<int> > a;
		long long int m=0;
		
		for(j=0;j<n;j++)
		{
			long long int l;
			cin>>l;
			if(m<l)
			{
				m=l;
				e=j;
			}
			pop.push_back(l);
		}
		
		for(j=0;j<n-1;j++)
		{
			vector<int> b;
			for(r=0;r<2;r++)
			{
			 cin>>k;
			 b.push_back(k);
			}
			a.push_back(b);
		}
		
		for(j=0;j<n;j++)
		{
			int q=0;
			long long int x=0;
			vector<int> b;
			
			for(r=0;r<n-1;r++)
			{
				if(a[r][0]==j+1)
				{
					b.push_back(a[r][1]-1);
				}
				else if(a[r][1]==j+1)
				{
					b.push_back(a[r][0]-1);
				}
			}
			
			b.push_back(j);
			sort(b.begin(),b.end());			
			
			if(!binary_search(b.begin(),b.end(),e))
			{
				cout<<e+1<<"\t";
			}
			else{
			for(r=0;r<n;r++)
			{
			    if(!binary_search(b.begin(),b.end(),r))
				{
					if(x<pop[r])
					{
						x=pop[r];
						q=r+1;
					}
				}
			}
			
			cout<<q<<"\t";
			}
		}		
	}
	
	return 0;
}

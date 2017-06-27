//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,c,s,d,t;
	
	cin>>n>>m>>k;
	vector< vector<long int> > a;
	for(i=0;i<n;i++)
	{
		vector<long int> b;
		for(j=0;j<m;j++)
		{
			cin>>l;
			b.push_back(l);
		}
		a.push_back(b);
	}
	
	for(i=0;i<k;i++)
	{
		cin>>r>>c>>s>>d;
		
		for(j=r-1;j<r-1+s;j++)
		{
			for(l=c-1;l<c-1+s;l++)
			{
				a[j][l]+=d;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cout<<a[i][j]<<" ";
		
		cout<<"\n";
	}
	
    return 0;
}


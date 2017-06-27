//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,p,q,x,y,z;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		
		vector< vector<int> > a;
		for(j=0;j<n;j++)
		{
			cin>>l;
			vector<int> b(k+1,0);
			for(m=0;m<l;m++)
			{
				cin>>r;
				b[r]=1;
			}
			a.push_back(b);
		}
		
		p=(n*(n-1))/2;
		for(j=0;j<n-1;j++)
		{
			for(m=j+1;m<n;m++)
			{
				for(l=1;l<=k;l++)
				{
					if(a[j][l]==0 && a[m][l]==0)
					{
						p--;
						break;
					}
				}
			}
		}
		
		cout<<p<<"\n";
		
		
		
	}
	
    return 0;
}

//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int q,i,j,k,l,m,n,r,t,x,y,z;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>q;
		vector< int > a;
		for(j=0;j<n;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		
		for(j=0;j<q;j++)
		{
			cin>>l>>r;
			cin>>k;
			
			vector< int > b(n+1,0);
			
			x=1;
			for(m=l-1;m<r-1;m++)
			{
				if(a[m]==a[m+1])
				{
					x++;
				}
				else
				{
					b[x]++;
					x=1;
				}
			}
			b[x]++;
			y=0;
			for(m=k;m<n+1;m++)
			{
				y+=b[m];
			}
			
			cout<<y<<"\n";
		}
	}
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

long long int maxi(long long int a,long long int b,long long int c)
{
	if(a>b)
	{
		if(a>c)
		return a;
		else
		return c;
	}
	else
	{
		if(b>c)
		return b;
		else
		return c;
	}
}

int main()
{
	long long int i,j,k,l,m,n,t;
	long long int r,o,y,g,b,v;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		
		cin>>r>>o>>y>>g>>b>>v;
		
		vector<char> q;
		
		if(r>n/2 || y>n/2 || b>n/2)
		{
			cout<<"IMPOSSIBLE\n";
		}
		else
		{
			char w='q';
			k=maxi(r,y,b);
			for(j=0;j<n;j++)
			{
				if(k==r && w!='r')
				{
					q.push_back('R');
					r--;
					k=maxi(0,y,b);
					w='r';
				}
				else if(k==y && w!='y')
				{
					q.push_back('Y');
					y--;
					w='y';
					k=maxi(r,0,b);
				}
				else if(k==b && w!='b')
				{
					q.push_back('B');
					b--;
					w='b';
					k=maxi(r,y,0);
				}
			}
			
			for(j=0;j<n;j++)
			cout<<q[j];
			
			cout<<"\n";
		}
	}
	
    return 0;
}


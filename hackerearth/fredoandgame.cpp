//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>m>>n;
		
		vector< int > a;
		for(j=0;j<n;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		
		r=-1;
		for(j=0;j<n;j++)
		{
			if(a[j]==0)
			{
				m-=1;
			}
			else
			{
				m+=2;
			}
			
			if(m==0)
			{
				r=j+1;
				break;
			}
		}
		
		if(r==-1 || r==n)
		cout<<"Yes "<<m<<"\n";
		else
		cout<<"No "<<r<<"\n";
		

	}
    return 0;
}


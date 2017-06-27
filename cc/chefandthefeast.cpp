//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,p;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<long long int> a;
		
		m=r=k=0;
		for(j=0;j<n;j++)
		{
			cin>>l;
			if(l>=0)
			{
				k=k+l;
				r++;
			}
			a.push_back(l);
		}
		
		sort(a.begin(),a.end());
		
		if(r==0)
		{
			for(j=0;j<n;j++)
			{
				m=m+a[j];
			}
			cout<<m<<"\n";
		}
		else
		{
			for(j=n-r-1;j>=0;j--)
			{
				if( abs(a[j])*(r+1) <= k )
				{
					k=k+a[j];
					r++;
				}
				else
				break;
			}
			
			for(j=0;j<n-r;j++)
			{
				m=m+a[j];
			}
			
			cout<<(k*r + m)<<"\n";
		}
		
	}
	
    return 0;
}


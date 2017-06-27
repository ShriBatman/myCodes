//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int q,i,j,k,l,m,n,r,t,y,p,x;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>k>>q;
		vector<long long int> a;
		for(j=0;j<k;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		
		sort(a.begin(),a.end());
		
		for(j=0;j<q;j++)
		{
			cin>>t;
			std::vector<long long int>::iterator up,low;
			up = std::upper_bound (a.begin(),a.end(),t);
			low = lower_bound(a.begin(),a.end(),t);
			m=up - a.begin();
			x=low-a.begin();
			p=0;
			if(a[m-1]>=t)
			{
				p=k-x+1;
				y=0;
				for(r=x-2;r>=y;r--)
				{
					if(t-a[r]<=r-y)
					{
						p++;
						y=y+(t-a[r]);
					}
					else
					break;
				}
			}
			else
			{
				p=k-m;
				y=0;
				for(r=m-2;r>=y;r--)
				{
					if(t-a[r]<=r-y)
					{
						p++;
						y=y+(t-a[r]);
					}
					else
					break;
				}
			}
			
			cout<<p<<"\n";
			
		}
	}
	
    return 0;
}


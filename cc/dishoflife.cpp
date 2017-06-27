//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

bool co(const std::vector<int>& a, const std::vector<int>& b)
{
    return a.size() > b.size();
}

int main()
{
	long long int i,j,k,l,m,n,r,t,x,y,z;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		vector< vector<int> > a;
		
		for(j=0;j<n;j++)
		{
			cin>>m;
			vector<int> b;
			for(l=0;l<m;l++)
			{
				cin>>x;
				b.push_back(x);
			}
			a.push_back(b);
		}
		
		sort(a.begin(),a.end(),co);

		vector<int> c(k+1,0);
		
		
		z=0;y=0;
		for(l=0;l<n;l++)
		{
			//cout<<"1";
			r=0;
			for(j=0;j<a[l].size();j++)
			{
				//cout<<"2";
				if(c[a[l][j]]==0)
				{
					//cout<<"3";
					c[a[l][j]]=1;
					r++;
				}
			}
			
			if(r>0)
			{
				z=z+r;
				y++;
			}
			
			if(y!=n && z==k)
			{
				cout<<"some\n";
				break;
			}
			else if(y==n && z==k)
			{
				cout<<"all\n";
			}
			else if(l==n-1 && z!=k)
			{
				cout<<"sad\n";
			}
			
		}
		
	}
    return 0;
}


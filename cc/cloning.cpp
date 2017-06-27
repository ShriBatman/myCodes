//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,b,c,d,i,j,q,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>q;
		
		vector<long long int> z;
		
		for(j=0;j<n;j++)
		{
			cin>>l;
			z.push_back(l);
		}
		
		for(j=0;j<q;j++)
		{
			cin>>a>>b>>c>>d;
			
			vector<long long int> x,y;
			//vector<long long int> y(z.begin()+(c-1),z.begin()+d);
			
			copy(z.begin()+(a-1),z.begin()+b,back_inserter(x));
			copy(z.begin()+(c-1),z.begin()+d,back_inserter(y));
			
			
			sort(x.begin(),x.end());
			sort(y.begin(),y.end());
			k=0;
			for(r=0;r<x.size();r++)
			{
				if(x[r]!=y[r])
				k++;
				if(k>1)
				break;
			}
			
			if(k>1)
			cout<<"NO\n";
			else
			cout<<"YES\n";
			
		}
		
	}
	
    return 0;
}


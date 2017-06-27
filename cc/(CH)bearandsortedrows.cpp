#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t,x,y,z;
	
		cin>>n;
				
		vector< vector<int> > a;
		for(j=0;j<n;j++)
		{
			vector<int> b;
			for(m=0;m<n;m++)
			{
				cin>>l;
				b.push_back(l);
			}
			a.push_back(b);
		}
		
		for(j=0;j<n;j++)
		{
			if(!is_sorted(a[j].begin(),a[j].end()) && !is_sorted(a[j].rbegin(),a[j].rend()))
			sort(a[j].begin(),a[j].end());
			
		}		
		for(j=0;j<n;j++)
		{
			for(m=0;m<n;m++)
			cout<<a[j][m]<<endl;
		}
		
	return 0;
}

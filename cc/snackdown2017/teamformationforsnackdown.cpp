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
		cin>>n>>m;
		
		vector<int> a(n+1,0);
		int flag=0;
		for(j=0;j<m;j++)
		{
			cin>>r>>k;
			if(a[r]==1 || a[k]==1)
			{
				flag=1;
			}
			a[r]=1;
			a[k]=1;
		}
		
		if(n%2==0 && flag==0)
		{
			cout<<"yes\n";
		}
		else
		cout<<"no\n";
	}
	
    return 0;
}


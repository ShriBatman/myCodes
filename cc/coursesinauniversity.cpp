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
		cin>>n;
		vector<long long int> a;
		
		for(j=0;j<n;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		
		m=*max_element(a.begin(),a.end());
		
		cout<<n-m<<"\n";
	}
	
    return 0;
}


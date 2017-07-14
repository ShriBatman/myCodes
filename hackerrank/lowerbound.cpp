//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	
	vector<long long int> a;
	
	for(i=0;i<n;i++)
	{
		cin>>t;
		a.push_back(t);
	}
	
	cin>>r;
	vector<long long int>::iterator lo;
	
	for(i=0;i<r;i++)
	{
		cin>>k;
		lo = lower_bound(a.begin(),a.end(),k);
		m=(lo-a.begin());
		if(a[m]==k)
		cout<<"Yes "<<m+1<<"\n";
		else
		cout<<"No "<<m+1<<"\n";
		
	}
	
    return 0;
}


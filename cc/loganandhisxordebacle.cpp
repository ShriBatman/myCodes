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
			
			if(j==0)
			k=l;
			else
			k=k^l;
			
			a.push_back(l);
		}
		
		l=100000000000;m=100000000000;
		sort(a.begin(),a.end());
		for(j=0;j<n;j++)
		{
			r=a[j]^k;
			//cout<<r<<endl;
			if(llabs(a[j]-r)<m)
			m=llabs(a[j]-r);
		}
		
		//r=llabs(k-l);
		cout<<m<<endl;
		//cout<<l<<endl;
		//cout<<k<<endl;
	}
	
    return 0;
}


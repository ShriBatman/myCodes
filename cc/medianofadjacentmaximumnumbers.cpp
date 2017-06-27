//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int p,q,i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<long long int>a;
		for(j=0;j<2*n;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		sort(a.begin(),a.end());
		l=(n+1)/2;
		k=a[2*n-l];
		
		r=0;m=2*n-l+1;
		
		for(j=m;j<2*n;j+=2)
		{
			p=a[j];
			a[j]=a[r];
			a[r]=p;
			r+=2;
		}
		
		cout<<k<<"\n";
		for(j=0;j<2*n;j++)
		cout<<a[j]<<" ";
		
		cout<<"\n";
	}
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	vector<int> a;
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
	}
	
	cin>>m;
	
	for(i=0;i<m;i++)
	{
		cin>>l>>r;
		
		for(j=l-1;j<r;j++)
		{
			t=a[j];
			a[j]=a[n-j-1];
			a[n-j-1]=t;
		}
	}
	
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
    return 0;
}


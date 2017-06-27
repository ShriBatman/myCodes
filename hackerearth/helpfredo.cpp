//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
 
/*
int main()
{
	long long int i,j;
	double l,m,r,t,n,k;
	cin>>n;
	 
	vector< double > a;
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
	}
	k=1;
	for(i=0;i<n;i++)
	{
		k*=pow(a[i],1.0/n);
	}
	k=k+1.0000000001;
	j=floor(k);
	cout<<j;
	
	
    return 0;
}

*/
int main()
{
	long long int i,j;
	long double l,m,r,t,n,k;
	cin>>n;
	//j=(long long int)n;
	//cout<<j;

	vector< long double > a;
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
	}
	k=1.0;
	for(i=0;i<n;i++)
	{
		k*=exp(log(a[i])/n);
	}
	//cout<<k;
	j=(long long int)floor(k+1.0000000001);
	cout<<j;
	
	
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,t,r;
	
	cin>>n>>k;
	
	if(n<k)
	cout<<"-1"<<endl;
	else if(n==k)
	cout<<n-1<<endl;
	else
	{
		if(k==2 && n>2)
		cout<<"-1"<<endl;
		else{
		m=k-1+(n-k)*2;
		cout<<m<<endl;
		}
	}
	
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n;
	
	cin>>n>>m;
	k=n-m;
	
	if(k%10==9)
	{
		cout<<k-1;
	}
	else
	cout<<k+1;
	return 0;
}

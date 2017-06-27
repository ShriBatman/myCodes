#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,t,r;
	cin>>n;
	
	vector<int>a;
	
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]>=38)
		{
			if(a[i]%5>2)
			a[i]=((a[i]/5)+1)*5;
		}
		
		cout<<a[i]<<endl;
	}
	
	
	
	
	return 0;
}

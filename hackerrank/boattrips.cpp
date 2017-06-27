#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,c,m,n,r,t;
	
	cin>>n>>c>>m;
	vector<int> a;
	
	k=c*m;
	
	r=0;
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
		
		if(l>k)
		r=1;
	}
	
	if(r==1)
	cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;
	
	
	
	return 0;
}

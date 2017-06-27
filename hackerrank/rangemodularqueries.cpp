#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,q,l,m,n,r,t,x,y;
	
	cin>>n>>q;
	
	vector<int> a;
	//vector< vector<int> > b(n ,vector<int>(n, -1));
	
	//for(i=0;i<n;i++)
	//{
	//	for(j=0;j<n;j++){
	//	cout<<b[i][j]<<endl;
	//}
	//}
	
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
	}
	
	for(i=0;i<q;i++)
	{
		cin>>l>>r>>x>>y;
		k=0;
		for(j=l;j<=r;j++)
		{
			if(a[j]%x==y)
			k++;
		}
		cout<<k<<endl;
	}
	
	return 0;
}

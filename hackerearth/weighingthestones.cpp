#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,x,y,t;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<int> a(101,0);
		vector<int> b(101,0);
		
		for(j=0;j<n;j++)
		{
			cin>>l;
			a[l]++;
		}
		for(j=0;j<n;j++)
		{
			cin>>l;
			b[l]++;
		}
		
		r=0;k=0;x=0;y=0;
		for(j=100;j>=0;j--)
		{
			if(a[j]>r)
			{
				r=a[j];
				k=j;
			}
			if(b[j]>x)
			{
				x=b[j];
				y=j;
			}
		}
		
		if(k>y)
		cout<<"Rupam\n";
		else if(y>k)
		cout<<"Ankit\n";
		else
		cout<<"Tie\n";
		
	}
	return 0;
}

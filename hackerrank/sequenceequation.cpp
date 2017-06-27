#include<bits/stdc++.h>

using namespace std;

int linear(int p[],int n,int x)
{
	int j;
	for(j=0;j<n;j++)
	{
		if(p[j]==x)
		{
			return j;
		}
	}
}

int main()
{
	int i,k,m,n,t;
	cin>>n;
	
	int p[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<n;i++)
	{
		k=i+1;
		
		m=linear(p,n,k);
		t=linear(p,n,m+1);
		
		cout<<t+1<<endl;
	}
	
	
	return 0;
}

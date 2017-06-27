#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,t;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		
		k=0;
		m=0;
		for(j=0;j<n;j++)
		{
			cin>>l;
			
			if(l==0)
			{
				k=k+1100;
				m++;
			}
			
			if(l==1 && m!=0)
			{
				k=k+100;
			}
		}
		
		cout<<k<<endl;
		
	}
	return 0;
}

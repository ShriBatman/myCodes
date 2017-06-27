#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,t,r;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		
		vector<string> a;
		string b;
		
		for(j=0;j<=n;j++)
		{
			getline(cin,b);
			a.push_back(b);
		}
		
		r=0;
		
		for(j=1;j<=n;j++)
		{
			for(l=0;l<m;l++)
			{
				if(a[j][l]=='W' && (l==0 || l==m-1))
				{
					r=1;
					//cout<<"1";
					break;
				}
				else if((a[j][l]=='A' && a[j][l+1]=='W') || (a[j][l]=='W' && a[j][l+1]=='A'))
				{
					r=1;
					//cout<<"2";
					break;
				}
			}
			if(r==1)
			break;
		}
		
	/*	for(l=0;l<m;l++)
		{
			for(j=1;j<=n;j++)
			cout<<a[j][l]<<endl;
		}
		*/
		
		if(r!=1)
		{
		for(l=0;l<m;l++)
		{
			for(j=1;j<n;j++)
			{
				if(a[j][l]=='W' && a[j+1][l]=='A')
				{
					r=1;
					//cout<<"3";
					break;
				}
				else if(a[j][l]=='B' && (a[j+1][l]=='A' || a[j+1][l]=='W'))
				{
					r=1;
					//cout<<"4";
					break;
				}
			}
			if(r==1)
			break;
		}
		}
		
		if(r==1)
		cout<<"no"<<endl;
		else
		cout<<"yes"<<endl;
	}
	
	return 0;
}

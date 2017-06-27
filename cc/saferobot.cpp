#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t,x,y;
	
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		string s;
		cin>>s;
		k=0;l=0;r=0;x=0;y=0;
		
		for(j=0;j<s.length();j++)
		{
			if(s[j]=='L')
			{
				k++;r--;
			}
			else if(s[j]=='R')
			{
				r++;
				k--;
			}
			else if(s[j]=='U')
			{
				l++;y--;
			}
			else if(s[j]=='D')
			{
				y++;l--;
			}
			
			if(l>=n || k>=m || r>=m || y>=n)
			{
				x=1;
				break;
			}
		}
		
		if(x==1)
		cout<<"unsafe"<<endl;
		else
		cout<<"safe"<<endl;
		
	}
	
	return 0;
}

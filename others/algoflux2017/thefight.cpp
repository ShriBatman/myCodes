#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t;
	
	cin>>t;
	string s;
	
	for(i=0;i<t;i++)
	{
		cin>>s;
		
		m=0;
		k=0;
		
		for(j=0;j<s.length();j++)
		{
			if(s[j]=='1')
			{
				k++;
			}
			
			if(s[j]=='0')
			{
				if(m<k)
				{
					m=k;
				}
				
				k=0;
			}
		}
		
		if(m<k)
		m=k;
		
		cout<<m<<endl;
	}
	
	return 0;
}

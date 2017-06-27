//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		string s;
		cin>>s;
		
		m=0;r=0;k=0;n=-1;
		for(j=s.length()-1;j>=0;j--)
		{
			if(s[j]=='0')
			{
				m++;
				n=0;
			}
			else
			{
				if(n==0)
				{
					r++;
					n=1;
				}
				
				k=k+m+r;
			}
		}
		
		cout<<k<<"\n";
	}
	
    return 0;
}


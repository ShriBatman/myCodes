//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>l;
		string s;
		cin>>s;
		
		int flag=0;
		m=0;
		t=0;
		for(j=0;j<l;j++)
		{
			if(s[j]=='T')
			{
				if(m!=t+1)
				{
				flag=1;
				break;
				}
				else
				t++;
			}
			else if(s[j]=='H')
			{
				if(t+1<=m)
				{
					flag=1;
					break;
				}
				else
				m++;
			}
		}
		
		if(m!=t)
		cout<<"Invalid\n";
		else if(flag==0)
		cout<<"Valid\n";
		else
		cout<<"Invalid\n";
		
	}
	
    return 0;
}


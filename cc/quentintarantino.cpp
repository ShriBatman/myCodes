#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,t;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<int> a;
		vector<int> b;
		
		for(j=0;j<n;j++)
		{
			cin>>l;
			a.push_back(l);
			b.push_back(l);
		}
		
		m=*max_element(a.begin(),a.end());
		if(m!=n)
		cout<<"no"<<endl;
		else
		{
			sort(b.begin(),b.end());
			for(j=0;j<n;j++)
			{
				if(a[j]!=b[j])
				{
					m=0;
					break;
				}
			}
			if(m!=0)
			cout<<"no"<<endl;
			else
			{
				for(j=0;j<n;j++)
				{
					if(b[j]==b[j+1])
					{
						m=1;
						break;
					}
				}
				if(m==1)
				cout<<"no"<<endl;
				else
				cout<<"yes"<<endl;
			}
		}
				
		
		
	}
	return 0;
}

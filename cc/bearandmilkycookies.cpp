#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,t;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		
		vector<string> a;
		//a.clear();
		string b;
		for(j=0;j<n;j++)
		{
			cin>>b;
			a.push_back(b);
		}
		
		
		m=0;
		
		if(a[n-1].compare("cookie")==0)
		cout<<"NO"<<endl;
		else{
		for(j=0;j<n-1;j++)
		{
			if(a[j].compare("cookie")==0 && a[j+1].compare("milk")!=0)
			{
				m=1;
				break;
			}
		}
		
		if(m==1)
		cout<<"NO"<<endl;
		else 
		cout<<"YES"<<endl;
		}
	}
	return 0;
}

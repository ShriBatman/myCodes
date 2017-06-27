//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,p;
	char q;
	cin>>n;
	vector<string> a,b;
	p=0;m=0;
	for(i=0;i<n;i++)
	{	
		cin>>q;
		string w;
		if(q=='+')
		{
			p++;
			cin>>w;
			a.push_back(w);
		}
		else if(q=='-')
		{
			m++;
			cin>>w;
			b.push_back(w);
		}
		
	}
	
	sort(a.begin(),a.end());
	for(j=0;j<p;j++)
	{
		cout<<a[j];
	}
	
	
	
	
	
	
    return 0;
}


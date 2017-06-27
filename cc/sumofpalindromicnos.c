#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	vector<int> a;
	long long int x;
	
	for(int i=1;i<=100000;i++)
	{
		int n=i;
		int r,s;
		while(n!=0)
		{
			r= n%10;
			n=n/10;
			s=s*10+r;
		}
		
		if(s==i)
		{
			a.push_back(i);
		}
	}
	
	for(int i=0;i<t;i++)
	{
		int r,l;
		cin>>l>>r;
		
		for(int j=0;j<a.size();j++)
		{
			if(a[j]>=l)
			x=x+a[j];
			else if(a[j]>r)
			break;
		}
	}
	
	return 0;
}

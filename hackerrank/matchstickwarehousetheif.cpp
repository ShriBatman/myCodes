#include<bits/stdc++.h>

using namespace std;


bool sortcol( const vector<long long int>& v1,
               const vector<long long int>& v2 ) {
 return v1[1] < v2[1];
}

int main()
{
	long long int i,j,k,l,m,n,t,r;
	
	vector < vector< long long int > > a;
	cin>>n>>r;
	
	
	for(i=0;i<r;i++)
	{
		vector < long long int > b;
	
		for(j=0;j<2;j++)
		{
		cin>>k;
		b.push_back(k);
		}
		a.push_back(b);
	}
	
	sort(a.begin(), a.end(),sortcol);
	
	t=n;
	m=0;
	
	for(i=r-1;i>=0;i--)
	{		
		if(a[i][0]>=t)
		{
			m=m+t*a[i][1];
			break;
		}
		else
		{
			t=t-a[i][0];
			m=m+a[i][0]*a[i][1];
		}
	}
	
	cout<<m<<endl;
	
	return 0;
}

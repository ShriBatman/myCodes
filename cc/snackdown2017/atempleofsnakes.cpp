//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,x,y,p;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<long long int> a;
		r=0;
		for(j=0;j<n;j++)
		{
			cin>>l;
			a.push_back(l);
			r=r+l;
		}
		
		if(n%2==0)
		{
			l=n/2;
			x=(l*(l+1))/2;
			y=(l*(l-1))/2;
			cout<<abs(x+y-r)<<"\n";
		}
		else
		{
			l=n/2;
			x=(l*(l+1))/2;
			y=((l+1)*(l+2))/2;
			cout<<abs(x+y-r)<<"\n";
		}
	}
    return 0;
}


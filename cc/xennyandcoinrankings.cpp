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
		cin>>m>>n;
		l=m+n;
		
		k=(l*(l+1))/2;
		k=k+(m+1);
		cout<<k<<"\n";
	}
	
    return 0;
}


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
		string a;
		cin>>a;		
		string b(a);
		
		reverse(b.begin(),b.end());
		
		if(a==b)
		{
			cout<<"YES";
			if(b.length()%2==0)
			cout<<" EVEN\n";
			else
			cout<<" ODD\n";
		}
		else
		{
			cout<<"NO\n";
		}
		
	}
	
    return 0;
}


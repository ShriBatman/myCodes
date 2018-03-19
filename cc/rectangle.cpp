//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>k>>l>>m>>n;
		
		if((k==l && m==n) || (k==m && l==n) || (k==n && l==m)) cout<<"YES\n";
		else cout<<"NO\n";
	}
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n>>m;
		
		if(n==1) cout<<"0\n";
		else if(n==2) cout<<m<<"\n";
		else{
			k = 2*m;
			cout<<k+n-3<<"\n";
		}
	}
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	string s;
	
	cin>>n>>r;
	cin>>s;
	
	k=0;
	
	for(i=0;i<s.size();i++){
		
		if(s[i]=='1'){
			k+=n;
			k%=r;
		}
		n=(n%r * n%r)%r;
	}
	
	cout<<k<<"\n";
	
	
    return 0;
}


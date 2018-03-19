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
		string a,b;
		
		cin>>a>>b;
		
		string :: iterator it = unique(a.begin(),a.end());
		a.resize(distance(a.begin(),it));
		
		it = unique(b.begin(),b.end());
		b.resize(distance(b.begin(),it));
		
		//cout<<a<<b;
		
		
	}
	
    return 0;
}

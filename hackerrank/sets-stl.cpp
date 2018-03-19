//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	cin>>t;
	
	set<long long int> s;
	
	for(i=0;i<t;i++){
		cin>>m>>n;
		
		if(m==1){
			s.insert(n);
		}
		else if(m==2){
			s.erase(n);
		}
		else{
			if(s.find(n)!=s.end()) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	cin>>t;
	
	map<string,long long int> p;
	
	string x;
	for(i=0;i<t;i++){
		cin>>m;
		
		if(m==1){
			cin>>x>>n;
			if(p.find(x)!=p.end()) p[x]=p[x]+n;
			else p.insert(pair<string,long long int>(x,n));
		}
		else if(m==2){
			cin>>x;
			p.erase(x);
		}
		else{
			cin>>x;
			if(p.find(x)!=p.end()) cout<<p[x]<<"\n";
			else cout<<"0\n";
			
		}
	}
    return 0;
}


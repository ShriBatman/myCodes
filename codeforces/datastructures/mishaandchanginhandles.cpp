//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	map<string,string> a;
	cin>>n;
	
	for(i=0;i<n;i++){
		string x,y;
		cin>>x>>y;
		if(a.find(x)==a.end()){
			a[y]=x;
		}
		else{
			a[y]=a[x];
			a.erase(x);
		}
	}
	
	cout<<a.size()<<"\n";
	map<string,string>::iterator it;
	
	for(it = a.begin();it!=a.end();it++){
		cout<<it->second<<" "<<it->first<<"\n";
	}
	
    return 0;
}


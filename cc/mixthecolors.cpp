//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		
		vector<long long int> a;
		for(j=0;j<n;j++){
			cin>>l;
			a.push_back(l);
		}
		sort(a.begin(),a.end());
		
		vector<long long int>::iterator it = unique(a.begin(),a.end());
		k = distance(a.begin(),it);
		cout<<a.size() - k<<"\n";
	}
	
    return 0;
}


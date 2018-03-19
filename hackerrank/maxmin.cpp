//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n>>k;
	
	vector<long long int> a;
	
	for(i=0;i<n;i++){
		cin>>l;
		a.push_back(l);
	}
	sort(a.begin(),a.end());
	m=100000000000;
	if(n==k){
		cout<<a[n-1]-a[0]<<"\n";
	}
	else{
	for(i=0;i<=n-k;i++){
		if(a[i+k-1]-a[i] < m) m = a[i+k-1] - a[i];
	}
	
	cout<<m<<"\n";}
    return 0;
}

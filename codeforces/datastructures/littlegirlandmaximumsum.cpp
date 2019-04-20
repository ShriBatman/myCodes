//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n>>m;
	
	vector<long long int> a;
	vector<long long int> b(n,0);
	for(i=0;i<n;i++){
		cin>>l;
		a.push_back(l);
	}
	sort(a.begin(),a.end());
	
	for(i=0;i<m;i++){
		cin>>l>>r;
		l--;
		b[l]++;
		if(r<n) b[r]--;
	}
	
	long long int sum=0;
	for(i=0;i<n;i++){
		sum+= b[i];
		b[i] = sum;
	}
	sort(b.begin(),b.end());
	k=0;
	for(i=0;i<n;i++){
		k += b[i]*a[i];
	}
	
	//for(i=0;i<n;i++) cout<<b[i];
	cout<<k<<"\n";
	
    return 0;
}


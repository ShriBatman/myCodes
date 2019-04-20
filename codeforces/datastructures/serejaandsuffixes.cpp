//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	cin>>n>>m;
	
	vector<long long int> a;
	for(i=0;i<n;i++){
		cin>>l;
		a.push_back(l);
	}
	vector<int> b(100100,0);
	vector<long long int> ans(n,0);
	
	ans[n-1]=1;
	b[a[n-1]]++;
	for(i=n-2;i>=0;i--){
		if(b[a[i]]){
			ans[i]=ans[i+1];
		}
		else{
			ans[i]= ans[i+1]+1;
			b[a[i]]++;
		}
	}
	
	//vector<long long int>c;
	for(i=0;i<m;i++){
		cin>>l;
		cout<<ans[l-1]<<"\n";
	}
	
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

void build(vector<long long int> &a){
	for(int i=a.size()/2 - 1;i>0;i--){
		a[i] = a[i*2] + a[i*2 + 1];
	}
	
	return;
}

void modify(vector<long long int> &a ,int p ,int value){
	//long long int p;
	a[p+=a.size()/2] = value;
	for(;p>1;p=p/2){
		a[p/2] = a[p] + a[p/2 +1]; 
	}
	
	return;
}

long long int query(int low,int high,vector<long long int> &a){
	long long int l,r,res=0;
	
	for(l=low+a.size()/2,r=high+a.size()/2;l<r;l=l/2,r=r/2){
		if(l%2!=0) res+=a[l++];
		if(r%2!=0) res+=a[--r];
	}
	
	return res;
}

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	
	vector<long long int> a(2*n,0);
	
	for(i=0;i<n;i++){
		cin>>l;
		a[n+i] = l;
	}
	
	build(a);
	modify(a,10,1);
	k = query(3,11,a);
	cout<<k<<"\n";
	//for(i=0;i<2*n;i++) cout<<a[i]<<" ";
	
    return 0;
}


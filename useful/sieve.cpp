//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
long long int n = 1000001;
vector<long long int> prime(n,1);

void sieve(long long int n){
	
	prime[0]=prime[1]=0;
	
	for(int i=2;i*i<=n;i++){
		if(prime[i]){
			
			for(int j=2;i*j<=n;j++){
				prime[i*j]=0;
			}
		}
	}
	
}

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	sieve(n);
	
	for(i=0;i<=n;i++){
		if(prime[i]) cout<<i;
	}
	
    return 0;
}


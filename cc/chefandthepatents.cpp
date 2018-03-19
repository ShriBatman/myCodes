//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

long long int mini(long long int a, long long int b, long long int c){
	if(a<=b && a<=c) return a;
	else if(b<=c && b<=a) return b;
	else if(c<=b && c<=a) return c;
}

int main(){
	long long int i,j,k,x,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n>>m>>x>>k;
		string a;
		cin>>a;
		long long int e=0;
		long long int o=0;
		
		for(j=0;j<k;j++){
			if(a[j] == 'E') e++;
			else o++;
		}
		
		if(m*x < n){
			cout<<"no\n";
		}
		else{
			for(j=1;j<=m;j++){
				if(j%2==0){
					r = mini(e,x,n);
					n-=r;
					k-=r;
					e-=r;
				}
				else{
					r = mini(o,x,n);
					n-=r;
					k-=r;
					o-=r;
				}
				
				if(n==0) break;
			}
			
			if(n==0) cout<<"yes\n";
			else if(n>0) cout<<"no\n";
			
			
		}
	}
	
	
    return 0;
}


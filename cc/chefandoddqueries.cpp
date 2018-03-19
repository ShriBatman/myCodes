//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int q,i,j,k,l,m,n,r,t,w;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		
		vector< vector<long long int> > a;
		
		for(l=0;l<n;l++){
			vector<long long int> b;
			for(j=0;j<2;j++){
				cin>>r;
				b.push_back(r);
			}
			a.push_back(b);
		}
		
		
		cin>>q;
		
		for(j=0;j<q;j++){
			cin>>m;
			k=0;
			vector<long long int> p(n,0);
			for(l=0;l<m;l++){
				cin>>r;
				for(w=0;w<n;w++){
					if(a[w][0]<=r && a[w][1]>=r) p[w]++;
				}
			}
			
			for(w=0;w<n;w++){
				if(p[w]%2!=0) k++;
			}
			cout<<k<<"\n";
			
		}
		
		
		
	}
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		vector<long long int> a,b;
		for(j=0;j<n;j++){
			cin>>l;
			a.push_back(l);
		}
		
		
		for(j=0;j<n;j++){
			cin>>l;
			b.push_back(l);
		}
		
		k=0;
		for(j=0;j<n;j++){
			if(a[j] > b[j]){
				k=k+1;
				break;
			}
		}
		
		for(j=0;j<n;j++){
			if(a[j] > b[n-1-j]){
				k=k+2;
				break;
			}
		}
		
		if(k==0) cout<<"both\n";
		else if(k==3) cout<<"none\n";
		else if(k==2) cout<<"front\n";
		else if(k==1) cout<<"back\n";
	}
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

void trouble(vector<long long int> &b){
	int k=0;
	
	while(k==0){
		k=1;
		for(int i=0;i<b.size()-2;i++){
			if(b[i]>b[i+2]){
				k=0;
				long long int p = b[i];
				b[i]=b[i+2];
				b[i+2]=p;
			}
		}
	}
	
	return ;
}

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
		b=a;
		sort(a.begin(),a.end());
		
		trouble(b);
		
		//for(j=0;j<n;j++) cout<<b[j];
		if(b==a){
			cout<<"Case #"<<i+1<<": OK\n";
		}
		else{
			for(j=0;j<n;j++){
				if(b[j]!=a[j]) break;
			}
			cout<<"Case #"<<i+1<<": "<<j<<"\n";
		}
	}
	
    return 0;
}


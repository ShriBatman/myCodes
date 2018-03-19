//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t,s;
	
	cin>>n>>k;
	
	s=0;
	vector<long long int> a;
	for(i=0;i<n;i++){
		cin>>l;
		s+=l;
		a.push_back(l);
	}
	
	
	if(n<=k){
		cout<<s<<"\n";
	}
	else{
		sort(a.begin(),a.end());
		r=1;m=1;
		
		for(i=n-k-1;i>=0;i--){
			s+=a[i]*r;
			if(m==k){
				m=1;
				r++;
			}
			else m++;
			
			
		}
		
		cout<<s<<"\n";
		
	}
	
	
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n>>k;
	
	vector<long long int> a,b;
	vector<long long int> c(n+1,-1);
	for(i=0;i<n;i++){
		cin>>l;
		c[l]=i;
		a.push_back(l);
	}
	b=a;
	sort(b.rbegin(),b.rend());
	if(k>=n){
		a=b;
	}
	else{
		
		for(i=0;i<k;i++){
			m = c[n-i];
			if(i == m){
				k++;
			}
			else{
				c[n-i] = i;
				c[a[i]] = m;
				r = a[i];
				a[i] = a[m];
				a[m]=r;
			}
			if(a==b) break;
		}
	}
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
    return 0;
}


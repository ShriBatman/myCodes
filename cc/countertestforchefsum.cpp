//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned int i,j,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		
		long long int k=4294967296;
		
		l = k/n;
		//cout<<l<<" ";
		if(k%n - l < 0){
			l--;
		}
		vector<unsigned int> a(n,l);
		
		r = k - (n+1)*l;
		//cout<<" "<<r<<" ";
		a[0] = a[0] + r/2 +1;
		
		for(j=0;j<n;j++) cout<<a[j]<<" ";
		
		cout<<"\n";
	}
	
    return 0;
}


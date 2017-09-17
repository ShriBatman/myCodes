//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		
		if(n%2==0){
			r=1;
			
			for(j=0;j<n/2;j++){
				k=r+1;
				cout<<k<<" "<<r<<" ";
				r+=2;
			}
		}
		else{
			r=1;
			for(j=0;j<(n-3)/2;j++){
				k=r+1;
				cout<<k<<" "<<r<<" ";
				r+=2;
			}
			
			cout<<n-1<<" "<<n<<" "<<n-2;
		}
		
		cout<<"\n";
		
	}
	
    return 0;
}

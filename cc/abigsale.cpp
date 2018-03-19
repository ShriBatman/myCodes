//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	double i,j,l,m,n,r,t;
	double k;
	cin>>t;
	
	cout<<fixed<<showpoint<<setprecision(9);
	for(i=0;i<t;i++){
		cin>>n;
		//vector<long long int> a,b,c;
		
		k=0;
		for(j=0;j<n;j++){
			cin>>l>>m>>r;
			k = k + (l*m*r*r)/10000;
		}
		
		cout<<k<<"\n";
	}
	
    return 0;
}

//l - ((l + r*l/100) - r/100 * ( l + r*l/100));
//
//l*m*(10000 - 9900*r - r*r)/10000

//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t,u,v,x;
	
	cin>>n>>m;
	
	//vector<long long int> a;
	vector< vector<long long int> > p;
	vector<long long int> a(31,0);

	for(i=0;i<n;i++){
		cin>>l;
		int e = 30;
		while(l>0){
			a[e] += l%2;
			l = l/2;
			e--;
		}
		p.push_back(a);
	}
	
	vector<long long int> power;
	for(i=30;i>=0;i--){
		power.push_back(pow(2,i));
	}
	
	for(i=0;i<m;i++){
		cin>>t>>r;
		
		x=0;
		u = r-t+1;
		if(t==1){
			for(j=0;j<31;j++){
				if((u%2==0 && p[r-1][j] < u/2) || (u%2!=0 && p[r-1][j] < u/2 +1)) x+=power[j];
			}
		}
		else {
			for(j=0;j<31;j++){
				if((u%2==0 && p[r-1][j]-p[t-2][j] < u/2) || (u%2!=0 && p[r-1][j]-p[t-2][j] < u/2 +1)) x+=power[j];
			}
		}
		
		cout<<x<<"\n";
	}
	
    return 0;
}


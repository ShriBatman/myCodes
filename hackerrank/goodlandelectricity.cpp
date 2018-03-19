//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t,x,y,z,s;
	
	cin>>n>>m;
	
	//t=0;
	vector<long long int> a;
	for(i=0;i<n;i++){
		cin>>l;
		//t+=l;
		a.push_back(l);
	}
	
	m--;
	x=0;y=-1;z=m;k=0;
	while(1){
		r=y;
		while(z>y){
			if(a[z]==1){
				x++;
				y=z;
				break;
			}
			else{
				z--;
			}
		}
		if(r==y){
			k=-1;
			break;
		}
		else if(y+m>=n-1) break;
		else{
			z=y+1+2*m;
			if(z>=n-1) z=n-1;
		}
	}
	
	if(k==-1) cout<<k<<"\n";
	else cout<<x<<"\n";
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,m,n,q,l,r,x,t,z,p,y,w;
	
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	cin>>n>>q;
	
	vector<long long int> a;
	
	for(i=0;i<n;i++){
		cin>>m;
		a.push_back(m);
	}
	
	for(i=0;i<q;i++){
		cin>>t;
		if(t==1){
			cin>>z>>k;
			p=a[z-1];
			y=z-1;
			for(j=0;j<k;j++){
				w=y+1;
				while(w<n && (w<=y+100)){
					if(a[w]>p){
						p=a[w];
						y=w;
						break;
					}
					w++;
				}
			}
			
			cout<<y+1<<"\n";
		}
		else{
			cin>>l>>r>>x;
			for(j=l-1;j<r;j++){
				a[j]=a[j]+x;
			}
		}
	}
	
    return 0;
}


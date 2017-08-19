//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,x,y,z;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n>>m;
		vector<long long int> a;
		r=0;
		for(j=0;j<n;j++){
			cin>>l;
			r+=l;
			a.push_back(l);
		}
		
		
		if(r%n!=0) cout<<"-1\n";
		else {
			
			vector< vector<long long int> >c;
			
			for(j=0;j<m;j++){
				x=0;
				y=0;
				vector<long long int> b;
				for(k=j;k<n;k=k+m){
					x=x+a[k];
					b.push_back(a[k]);
				}
				c.push_back(b);
				if(x%b.size()!=0 || x/b.size()!=r/n){
					y=1;break;
				}
				
			}
			
			if(y==1) cout<<"-1\n";
			else{
				z=0;
				for(j=0;j<m;j++){
					for(k=0;k<c[j].size();k++){
						if(c[j][k]>r/n){
							z=z+(c[j][k] - r/n);
							if(k<c[j].size()-1)
							c[j][k+1]=c[j][k+1] + c[j][k] - r/n;
						}
						else if(c[j][k]<r/n){
							z=z+(r/n - c[j][k]);
							if(k<c[j].size()-1)
							c[j][k+1]=c[j][k+1] - r/n + c[j][k];
						}
					}
				}
				cout<<z<<"\n";
			}
		}
	}
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int q,w,i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		
		vector< vector<long long int> > a;
		
		for(j=0;j<n;j++){
			vector<long long int> b;
			
			for(m=0;m<4;m++){
				cin>>l;
				b.push_back(l);
			}
			a.push_back(b);
		}
		
		cin>>q;
		
		
		for(j=0;j<q;j++){
			cin>>l;
			
			k = a[0][0] + a[0][1]*l +a[0][2]*l*l + a[0][3]*l*l*l;
			for(m=1;m<n;m++){
				 if(a[m][0] + a[m][1]*l + a[m][2]*l*l + a[m][3]*l*l*l < k) k=a[m][0]+a[m][1]*l + a[m][2]*l*l + a[m][3]*l*l*l;
			}
			
			cout<<k<<"\n";
		}
		
		
	}
	
	
    return 0;
}


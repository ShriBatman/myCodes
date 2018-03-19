//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	
    long long int i,j,c,l,m,n,t,d,s,r,q;
	double k;
	 
    cin>>t;
    cout<<setprecision(9)<<fixed;
    for(i=0;i<t;i++){
        cin>>n;
 
        vector<long long int> a;
        for(j=0;j<n;j++){
            cin>>l;
            a.push_back(l);
        }
 
        cin>>c>>d>>s;
        
        r = *max_element(a.begin(),a.end());
		k=a[0];
		m=0;
		if(k!=r){
		while(m<n){
        for(j=m+1;j<n;j++){
            if(a[m]<a[j]){
            	k = k+(a[j]-a[m]);
				m=j;
			}
			if(a[m]==r){
				m=-1;
				break;
			}
        }
        if(m==-1) break;
        m++;
		}
		}
 
        cout<<k*(c-1)<<"\n";
    }
    
    return 0;
}

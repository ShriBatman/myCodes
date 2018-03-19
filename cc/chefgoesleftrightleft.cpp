//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,max,low;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n>>k;
		
		vector<long long int> a;
		
		for(j=0;j<n;j++){
			cin>>l;
			a.push_back(l);
		}
		
		
		if(n<=2) cout<<"YES\n";
		else{
			r=0;l=0;
			max=1000000000;
			low=0;
			//r is last step l is second to last step
			//1 is right 2 is left 
			if(a[0]<a[1]){
				r=1;
				l=1;
			}
			else{
				r=2;
				l=2;
			}
			
			m=0;
			for(j=2;j<n;j++){
				if(r==l){
					if(r==1){
						if(a[j]<a[j-2] || a[j]>max){
							m=1;
							break;
						}
						else if(a[j]<a[j-1] && a[j]>a[j-2]){
							r=2;
							low=a[j-2];
						}
					}
					else{
						if(a[j]>a[j-2] || a[j]<low){
							m=1;
							break;
						}
						else if(a[j] > a[j-1] && a[j]<a[j-2]){
							r=1;
							max=a[j-2];
						}
						
					}
				}
				else{
					if(r==1 && l==2){
						if(a[j] > a[j-3] || a[j]<a[j-2]){
							m=1;
							break;
						}
						else if(a[j] > a[j-1]){
							l=1;
						}
						else{
							r=2;
							l=1;
						}
					}
					else{
						if(a[j] > a[j-2] || a[j]<a[j-3]){
							m=1;
							break;
						}
						else if(a[j] > a[j-1]){
							r=1;
							l=2;
						}
						else{
							l=2;
						}
					}
				}
			}
			
			if(m==1) cout<<"NO\n";
			else cout<<"YES\n";
			
		}
	}
	
    return 0;
}


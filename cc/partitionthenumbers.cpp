//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,p,q,w;
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n>>k;
		if(k<=3) cout<<"impossible\n";
		else{
		r=(k*(k+1))/2 ;
		
		string x(k,'0');
		x[n-1]='2';
		//cout<<x<<"\n";
		
		
		if((r%2==0 && n%2==0) || (r%2!=0 && n%2!=0)){
			m=(r-n)/2;
			p = sqrt(r-n);
		//	cout<<p<<"\n";
		
			if((p*(p+1))/2 < m) p++;
			if(n<=p && (p*(p+1))/2 -n < m) p++;
			w = (p*(p+1))/2;
			//cout<<p<<"\n";
			
			if(n>p){
				for(j=p;j<x.size();j++){
					if(j!=n-1) x[j]='1';
				}
				//cout<<x<<"i\n";
				if(w - m !=0){
					x[w - m-1]='1';
				} 
			}
			else{
				for(j=p;j<x.size();j++){
					x[j]='1';
				}
				//cout<<x<<"\n";
				if(w -n- m !=0){
					if(w-m-n == n){
						if(p-n==1){
							if(n%2==0){
								x[n/2]='1';
								x[n/2 -2]='1';
							}
							else{
								x[n/2]='1';
								x[n/2 -1] ='1';
							}
						}
						else{
							x[p]='0';
							x[p-1]='1';
							x[n]='1';
						}
					}
					else x[w - m-n-1]='1';
				}
			}	
			cout<<x<<"\n";
		}
		else{
			cout<<"impossible\n";
		}
		}
		
		
		
	}
	
    return 0;
}

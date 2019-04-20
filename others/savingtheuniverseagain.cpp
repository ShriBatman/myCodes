//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		string s,p;
		long long int d;
		cin>>d;
		cin>>s;
		
		k=1;
		m=0;
		n=0;
		vector<long long int> a;
		for(j=0;j<s.size();j++){
			
			if(s[j]=='C'){
				n++;
				k=k*2;
				a.push_back(-1);
			}
			else{
				m=m+k;
				l = pow(2,n);
				a.push_back(l);
			}
		}
		p = "";
		for(j=0;j<s.size();j++){
			if(j<s.size()-n) p = p+"S";
			else p+="C";
		}
	//	cout<<p;
		
		if(n==j || m<=d){
			cout<<"Case #"<<i+1<<": 0\n";
		}
		else if(m>d){
			if(n==0) cout<<"Case #"<<i+1<<": IMPOSSIBLE\n";
			else{
				long long int x=0;
				j = s.size()-1;
				while(m>d && j>=1 && s!=p){
					if(s[j]=='S'){
						if(s[j-1]=='C'){
							m = m - a[j]/2;
							x++;
							a[j-1] = a[j]/2;
							a[j]=-1;
							s[j] = 'C';
							s[j-1] = 'S';
							j = s.size()-1;
						}
						else j--;
					}
					else j--;
				}
				
				if(m>d) cout<<"Case #"<<i+1<<": IMPOSSIBLE\n";
				else cout<<"Case #"<<i+1<<": "<<x<<"\n";
			}
		}
	}
	
    return 0;
}


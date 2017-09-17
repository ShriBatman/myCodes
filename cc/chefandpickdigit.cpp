//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		string s,p;
		cin>>s;
				
		vector<int> a(10,0);
		for(j=0;j<s.size();j++){
			n = s[j];
			a[n-48]++;
		}
		
		m=6;k=5;
		for(j=0;j<26;j++){
			if(m==k){
				if(a[m]>1){
					char c = j+65;
					p.push_back(c);
				}
			}
			else if(a[m]>0){
				if(a[k]>0){
					char c = j+65;
					p.push_back(c);
				}
			}
			k++;
			if(k==10){
				k=0;
				m++;
			}
		}
		
		cout<<p<<"\n";
	}
	
    return 0;
}


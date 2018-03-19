//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		string s;
		cin>>s;
		r=0;
		k=0;
		for(j=0;j<s.size();j++){
	
			if(s[j] == 'c' || s[j] ==  'f' || s[j] == 'e' || s[j] == 'h'){
				if(j<s.size()-1 && (s[j+1] == 'c' || s[j+1] ==  'f' || s[j+1] == 'e' || s[j+1] == 'h') && (s[j+1]!=s[j])){
					if(j<s.size()-2 && (s[j+2] == 'c' || s[j+2] ==  'f' || s[j+2] == 'e' || s[j+2] == 'h') && (s[j+2]!=s[j] && s[j+2]!=s[j+1])){
						if(j<s.size()-3 && (s[j+3] == 'c' || s[j+3] ==  'f' || s[j+3] == 'e' || s[j+3] == 'h') && (s[j+3]!=s[j] && s[j+3]!= s[j+1] && s[j+3]!=s[j+2])){
							r++;
						}
					}
				}
			}
		}
		
		if(r==0) cout<<"normal\n";
		else cout<<"lovely "<<r<<"\n";
	}
	
    return 0;
}


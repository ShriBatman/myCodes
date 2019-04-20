//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	cin>>n>>m;
	string s;
	cin>>s;
	vector<int> a;
	
	r=0,k=0;
	for(i=0;i<n;i++){
		if(s[i]=='.') k++;
		else{
			//t=0;
			if(k>0) r+=k-1;
			//cout<<r;
			k=0;
		}
	}
	if(k>0) r+=k-1;
	
	//cout<<r;
	/*if(n>1){
		for(i=0;i<n;i++){
			if(s[i]!='.') a.push_back(0);
			else{
				if(i==0){
					if(s[1]=='.') a.push_back(1);
					else a.push_back(0);
				}
				else if(i==n-1){
					if(s[n-2]=='.') a.push_back(1);
					else a.push_back(0);
				}
				else{
					if(s[i+1]=='.' && s[i-1]=='.') a.push_back(2);
					else if(s[i+1]=='.' || s[i-1]=='.') a.push_back(1);
					else a.push_back(0);
				}
			}
		}
	}*/
	
	for(i=0;i<m;i++){
		if(n==1) cout<<"0\n";
		else{
			char c;
			cin>>l;cin>>c;
			if(c!='.'){
				//if(s[l-1]!='.') s[l-1] = c;
				if(s[l-1]=='.'){
					s[l-1]=c;
				if(l!=n && s[l]=='.') r--;
				if(l!=1 && s[l-2]=='.') r--;
				}
				cout<<r<<"\n";
			}
			else{
				 //cout<<r<<"\n";
				if(s[l-1]!='.'){
					s[l-1]=c;
					if(l!=n && s[l]=='.') r++;
					if(l!=1 && s[l-2]=='.') r++;
				}
				cout<<r<<"\n";
			}
		}
	}
	
    return 0;
}


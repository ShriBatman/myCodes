//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	cin>>n>>l;
	string s;
	cin>>s;
	
	vector<int> a(26,0);
	vector<int> b(26,0);
	k=l;
	for(i=0;i<26;i++){
		char c = 65+i;
		size_t w = s.find_last_of(c);
		a[i] = w;
	}
	
	//for(i=0;i<26;i++) cout<<a[i]<<"\n";
	m=1;
	for(i=0;i<n;i++){
		//if(s[i])
		if(b[s[i]-'A']==0 && k==0){
			m=0;break;
		}
		else if(b[s[i]-'A']==0 && k>0){
			b[s[i]-'A']=1;
			k--;
		}
		
		if(a[s[i]-'A']==i) b[s[i]-'A']=0,k++;
	}
	
	if(m==0) cout<<"YES\n";
	else cout<<"NO\n";
	
    return 0;
}


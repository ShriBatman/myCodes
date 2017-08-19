//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int q,x,i,j,k,l,m,n,r,t;
	
	vector<int> a,v;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>l;
		a.push_back(l);
	}
	
	cin>>q>>x;
	r=k=t=j=m=0;
	for(i=0;i<q;i++){
		string s;
		cin>>s;
		if(s=="Harry" && j!=1 && k<n){
			v.push_back(a[k]);
			r+=a[k];
			k++;
		}
		else if(s=="Remove" && j!=1 && v.size()>0){
			r-= v.back();
			v.erase(v.begin() + v.size()-1);
		}
		if(r==x) j=1;
	}
	
	if(j==1) cout<<v.size()<<"\n";
	else cout<<"-1\n";
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	double i,j,k,l,m,n,r,t,x,y,u,v;
	
	cin>>n>>l>>r;
	
	t=0;
	vector< double > a;
	for(i=0;i<n;i++){
		cin>>u>>v;
		if((u-l)!=0) a.push_back((v-r)/(u-l));//,cout<<i<<"\n";
		else{
			t=1;
		}
	}
	
	sort(a.begin(),a.end());
	vector<double>::iterator it = unique(a.begin(),a.end());
	a.resize(distance(a.begin(),it));
	
	//	for(i=0;i<a.size();i++) cout<<a[i];

	k = a.size();
	//if(t==1) k=k+1;
	cout<<k+t<<"\n";
	
	
    return 0;
}


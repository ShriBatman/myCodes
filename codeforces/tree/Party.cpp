//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	vector<int> emps;
	emps.push_back(0);
	for(i=0;i<n;i++){
		cin>>l;
		emps.push_back(l);
	}
	k=0;
	for(i=1;i<=n;i++){
		m=0;
		for(j=i;j!=-1;j=emps[j]) m++;
		if(m>k) k = m;
		//cout<<k;
	}
	
	cout<<k<<"\n";
    return 0;
}


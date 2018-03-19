//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	vector<long long int> a;
	
	for(i=0;i<n;i++){
		
		cin>>l;
		a.push_back(l);
	}
	
	sort(a.begin(),a.end());
	
	for(i=0;i<n;i++) cout<<a[i]<<"\n";
	
    return 0;
}


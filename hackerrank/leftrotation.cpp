//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	vector<long long int> arr;
	
	cin>>n>>t;
	
	for(i=0;i<n;i++){
		cin>>m;
		arr.push_back(m);
	}
	
	t=t%n;
	rotate(arr.begin(),arr.begin()+t,arr.end());
	
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
    return 0;
}


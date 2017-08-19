//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n>>m;
	
	vector<long long int> arr(n,0);
	long long int max=0;

	for(i=0;i<m;i++){
		cin>>k>>l>>r;
		
		for(j=k-1;j<l;j++){
			arr[j]+=r;
			if(arr[j]>max) max=arr[j];
		}
	}
	
	cout<<max;
	
	
    return 0;
}


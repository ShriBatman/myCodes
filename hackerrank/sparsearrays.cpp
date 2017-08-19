//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	vector<string> arr;
	string x;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>x;
		arr.push_back(x);
	}
	
	cin>>t;
	string p;
	
	for(i=0;i<t;i++){
		cin>>p;
		k=0;
		for(j=0;j<n;j++){
			if(arr[j].compare(p)==0) k++;
		}
		
		cout<<k<<"\n";	
	}
	
	
	
    return 0;
}


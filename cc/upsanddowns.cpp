//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		vector<long long int> a;
		
		for(j=0;j<n;j++){
			cin>>l;
			a.push_back(l);
		}
		
		sort(a.begin(),a.end());
		for(j=1;j<n-1;j=j+2){
			r=a[j];
			a[j]=a[j+1];
			a[j+1]=r;
		}
		
		for(j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<"\n";
	}
	
    return 0;
}


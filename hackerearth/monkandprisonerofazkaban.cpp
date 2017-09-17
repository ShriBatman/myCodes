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
	
	for(i=0;i<n;i++){
		k=0;t=0;
		for(j=i+1;j<n;j++){
			if(a[j]>a[i]){
				t=1;k+=j+1;break;
			} 
		}
		if(t==0) k+=-1;
		
		t=0;
		for(j=i-1;j>=0;j--){
			if(a[j]>a[i]){
				t=1;k+=j+1;break;
			}
		}
		if(t==0) k+=-1;
		
		cout<<k<<" ";
	}
	
    return 0;
}


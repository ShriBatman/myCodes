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
		long long int sum=0;
		for(j=0;j<n;j++){
			cin>>l;
			sum=sum+l;
			a.push_back(l);
		}
		
		k=0;
		long long int min=100000000000000;
		int p=0;
		long long int d = 0;
		for(j=0;j<n;j++){
			d = d + a[j];
			k=d+sum;
			sum=sum-a[j];
			
			if(k<min){
				min=k;
				p=j;
			}
		}
		
		cout<<p+1<<"\n";
		
	}
	
    return 0;
}


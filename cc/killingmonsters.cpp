//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	long long int i,j,k,l,m,n,r,t,q;
	
	cin>>n;
	vector<long long int> a;
	for(i=0;i<n;i++){
		cin>>l;
		a.push_back(l);
	}
	
	cin>>q;
	
	for(i=0;i<q;i++){
		cin>>k>>r;
		m=0;
		for(j=0;j<n;j++){
			l=j&k;
			//cout<<l<<"\n";
			if(l == j) a[j]=a[j]- r;
			if(a[j]>0){
				m++;
				//cout<<a[j];
			}
		}
		cout<<m<<"\n";
	}
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	for(i=0;i<t;i++){
		cin>>k>>n;
		vector<long long int> a;
		for(j=0;j<n;j++){
			cin>>l;
			a.push_back(l);
		}
		
		long long int p=0,min,max;
		vector<long long int>::iterator it,itt;
		
		for(j=0;j<k;j++){
			it = min_element(a.begin(),a.end());
			min = *it;
			
			itt = max_element(it,a.end());
			max = *itt;
			
			p=p+max-min;
			
			a.erase(it);
			a.erase(itt);
		}
		cout<<p<<"\n";
	}
	
    return 0;
}


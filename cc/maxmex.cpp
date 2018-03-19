//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		
		cin>>n>>k;
		
		vector<long long int> a;
		for(j=0;j<n;j++){
			cin>>l;
			a.push_back(l);
		}
		
		
		vector<long long int>::iterator it;
		sort(a.begin(),a.end());
		it = unique(a.begin(),a.end());
		
		a.resize(distance(a.begin(),it));
		//for(j=0;j<a.size();j++) cout<<a[j];
		
		r=0;
		m=k;
		for(j=0;j<n;j++){
			if(a[j]!=r){
				m = m+r-a[j];
				r=a[j]+1;
				if(m<0){
					r = r + m - 1;
					m=0;
					break;
				}
			}
			else r++;
			
			//cout<<r;
		}
		
		cout<<r+m<<"\n";
		
	}
	
    return 0;
}


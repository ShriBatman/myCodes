//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
 
long long int check(vector<long long int> a,long long int mid,long long int m){
	
	vector<long long int>::iterator it = upper_bound(a.begin(),a.end(),mid);
	long long int d = m - (it-a.begin());
	long long int r;
	
	while(it != a.end()){
		if(*it%mid == 0) r = *it/mid;
		else r = *it/mid + 1;
		
		if(r<=d){
			d-=r;
			it++;
		}
		else return -1;
	}
	
	return 1;
}
 
int main(){
	long long int s,i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n>>m;
		
		r=0;
		s=0;
		vector<long long int> a;
		for(j=0;j<n;j++){
			cin>>l;
			if(l==1) r++;
			else s+=l;
			a.push_back(l);
		}
		
		
		if(n==m){
			cout<<*max_element(a.begin(),a.end())<<"\n";
		}
		else if(n==1){
			long long int d;
			if(a[0]%m==0) d = a[0]/m;
			else d = a[0]/m + 1;
			cout<<d<<"\n";
		}
		else if(r+s <= m){
			cout<<"1\n";
		}
		else{
			sort(a.begin(),a.end());
			long long int d,w,u;
			w=1;u=a[n-1];
			
			k=0;
			while(w<=u){
				d = (u + w)/2;
			if(k==0 || k!=d){
				k=d;
			}
			else if(k==d) break;
			
			
			//cout<<d<<"\n";
			r = check(a,d,m);
			
			if(r==1){
				u = d;
			}
			else{
				w = d+1;
			}
			}
			
			
			cout<<d<<"\n";
			
		}
	}
	
    return 0;
}

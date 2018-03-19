//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,sum,last;
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		
		vector< multiset<long long int> >p;
		for(j=0;j<n;j++){
			multiset<long long int> q;
			for(l=0;l<n;l++){
				cin>>m;
				q.insert(m);
			}
			p.push_back(q);
		}
		
		multiset<long long int> :: reverse_iterator it = p[n-1].rbegin();
		last = *it;
		sum=last;
		//cout<<sum<<last;
		for(j=n-2;j>=0;j--){
			r=0;
			for(multiset<long long int>::reverse_iterator it=p[j].rbegin();it!=p[j].rend();it++){
				if(*it<last){
					r=1;
					last = *it;
					break;
				}
			}
			if(r==1) sum+=last;
			else break;
			
			//cout<<sum<<last;
		}
		
		if(r==0) cout<<"-1\n";
		else cout<<sum<<"\n";
		
	}
	
    return 0;
}


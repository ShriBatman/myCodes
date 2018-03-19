//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int p,i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n>>p;
		
		if(p==1 || p==2) cout<<"impossible\n";
		//else if(n==2 && p==2) cout<<"Impossible\n";
		else{
			
			for(j=0;j<(n/p);j++){
				cout<<"a";
				for(m=0;m<p-2;m++){
					cout<<"b";
				}
				cout<<"a";
			}
			cout<<"\n";
		}
		
	}
	
    return 0;
}


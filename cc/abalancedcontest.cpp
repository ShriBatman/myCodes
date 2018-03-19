//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,p;
	
	cin>>t;

	
	for(j=0;j<t;j++){
		
		cin>>n>>r;
			
	long long int max = r/10;
	long long int min;
	min = r/2;
	
	l=0;
	p=0;
	for(i=0;i<n;i++){
		cin>>k;
		if(k>=min) l++;
		else if(k<=max) p++;
	}
	
	if(l==1 && p==2) cout<<"yes\n";
	else cout<<"no\n";
	}
	
	return 0;
}


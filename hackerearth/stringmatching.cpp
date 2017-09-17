//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	string s;
	
	cin>>s>>n;
	
	vector<long long int> p(10,0);
	for(i=0;i<n;i++){
		cin>>l;
		p[l]=1;
	}
	//WRONG ANSWER
	
	k=0;
	r=0;
	for(i=0;i<s.length();i++){
		t = s[i];
		if(p[t-48]==1){
			k++;
		}
		else{
			r=r + (k*(k+1))/2;
			k=0;
		}
	}
	r=r+(k*(k+1))/2;
	
	cout<<r;
	
	
    return 0;
}


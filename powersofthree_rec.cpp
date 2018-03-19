//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

long long int power(long long int x){
	if(x==0) return 1;
	else if(x%2==0){
		return power(x/2)*power(x/2);
	}
	else{
		return power(x/2)*power(x/2)*3;
	}
}

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	t = power(n);
	cout<<t;
    return 0;
}


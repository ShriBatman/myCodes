//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int gcd(long long int a,long long int b){
	if(a<b){
		long long int temp= a;
		a = b;
		b = temp;
	}
	if(b==0) return a;
	else return a%b==0?b:gcd(b,a%b);
}

long long int power(long long int x,long long int y){
	long long int p=1;
	while(y){
		
		if(y%2==1){
			p = ((p%10000000007)*(x%1000000007))%1000000007;
		}
		x = ((x%10000000007)*(x%1000000007))%1000000007;
		y = y/2;
	}
	return p;
}

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	vector<long long int> a;
	
	k=0;
	m=1;
	for(i=0;i<n;i++){
		cin>>l;
		a.push_back(l);
		k = gcd(l,k);
		m=((m%1000000007) * (l%1000000007))%1000000007;
	}
	
	r = power(k,m);
	cout<<r;
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b){
	if(a<b){
		long long int p = a;
		a=b;
		b=p;
	}
	return a%b==0?b:gcd(b,a%b);
}

int main()
{
	long long int i,j,k,l,m,n,r,t,p,q,phi,e,d;
	
	cin>>m;
	p=3;
	q=7;
	
	n=p*q;
	phi = (p-1)*(q-1);
	
	e=2;
	
	while(1){
		if(gcd(e,phi)==1) break;
		else e++;
	}
	
	d=(1+(2*phi))/e;
	
	k = pow(m,e);
	k = fmod(k,n);
	cout<<k<<"\n";
	
	t = pow(k,d);
	t = fmod(t,n);
	cout<<t<<"\n";
	
	
	
    return 0;
}


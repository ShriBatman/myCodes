//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int x,long long int y){
	long long int p;
	if(x<y){
		p = x;
		x=y;
		y=p;
	}
	
	return x%y==0?y:gcd(y,x%y);
}

int main()
{
	long long int i,j,k,l,m,n,r,t,a,b,c,d;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>a>>b>>c>>d>>k;
		m=gcd(a,b);
		l=gcd(c,d);
		
		r = (k*gcd(m,l))/m;
		r = r/l;
		cout<<2*r + 1<<"\n";
	}
	
    return 0;
}

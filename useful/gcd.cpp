#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b)
{
	if(a==0 || b==0) return 0;
	if(a==b) return a;
	 
	if(a>b) return gcd(a-b,b);
	return gcd(b-a,a);
}

int main()
{
	long long int a,b,c;
	cin>>a>>b;
	
	c = gcd(a,b);
	cout<<c;
	
	return 0;	
}



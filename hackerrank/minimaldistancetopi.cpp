#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int j,k,l,m,n,r,t;
	
	cin>>m>>n;
	
	long double i,y,pi;
	pi=3.1415926535897932384626433832795028841971693993751;
	r=1;
	y=1;
	for(i=m;i<=n;i++)
	{
		k=roundl(pi*i);
		if(fabs((k/i)-pi)<y)
		{
			y=fabs((k/i)-pi);
			r=i;
            t=k;
		}
		else if(y==fabs((k/i)-pi))
		{
			if(r>i)
			{
				r=i;
				t=k;
			}
		}
	}
	
	cout<<t<<"/"<<r<<endl;
	
	
	return 0;
}

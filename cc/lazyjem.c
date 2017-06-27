#include<stdio.h>

int main()
{
	long long int n,m,b,i,j,k,l,t;
	scanf("%lld",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld%lld",&n,&b,&m);
		k=0-b;
		while(n>0)
		{
			if(n%2==0)
			{
				l=n;
				n=n/2;
			}
			else
			{
				l=n;
				n=l-(n+1)/2;
			}
			k=k+m*(l-n)+b;
			m=m*2;
		}
		
		printf("%lld\n",k);
		
		
	}
	
	
	
	return 0;
}

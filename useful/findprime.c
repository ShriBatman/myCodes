#include<stdio.h>
#include<math.h>

int main()
{
	long long int i,j,k,l,n,t;
	scanf("%lld",&n);
	int prime[n+1];
	
	for(i=0;i<=n;i++)
	{
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	
	for(i=2;i<=sqrt(n)+1;i++)
	{
			for(j=2;i*j<=n;j++)
			{
				prime[i*j]=0;
			}
	}
	
	for(i=2;i<=n;i++)
	{
		if(prime[i]==1)
		printf("%lld\n",i);
	}
	
	return 0;
}

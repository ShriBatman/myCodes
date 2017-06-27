#include<stdio.h>

int main()
{
	int i,q;
	unsigned long long int k,n,j,sum;
	scanf("%d",&q);
	
	for(i=0;i<q;i++)
	{
		scanf("%lld",&n);
		
		k=(n*(n+1)*(2*n+1))/6;
		
		
		printf("%lld\n",k);
	}
	
	return 0;
	
}

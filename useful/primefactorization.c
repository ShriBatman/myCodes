#include<stdio.h>
#include<math.h>

int main()
{
	long long int t,i,j,k,l,m,n;
	scanf("%lld",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		
		for(j=2;j<=sqrt(n);j++)
		{
			if(n%j==0)
			{
				printf("%lld\n",j);
				k=0;
				while(n%j==0)
				{
					n=n/j;
					k++;
				}
				printf("%lld^%lld\t",j,k);
			}
		}
		if(n!=1)
		{
			printf("%lld^%lld\t",n,1);
		}
	}
	
	
	
	return 0;
}

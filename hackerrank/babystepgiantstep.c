#include<stdio.h>

int main()
{
	long long int i,j,k,a,b,q,d;
	scanf("%lld",&q);
	
	for(i=0;i<q;i++)
	{
		scanf("%lld%lld%lld",&a,&b,&d);
		
		k=0;
		
		while(d>=b+b)
		{
			k++;
			d=d-b;
		}
		
		if(d>0)
		{
			if(d==a || d==b)
			printf("%lld\n",k+1);
			else
			printf("%lld\n",k+2);
		}
		else
		{
			printf("%lld\n",k);
		}
	}
	return 0;
}

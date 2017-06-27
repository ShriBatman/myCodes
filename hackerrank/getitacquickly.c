#include<stdio.h>

int main()
{
	int i,t;
	long long int a,b,c,d,k,n;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		
		k=a+b;
		d=(a*2*2)+(b*2);
		d=d-2*k;
		
		if((c-k)%d==0)
		{
			n=(c-k)/d;
			printf("%lld\n",n+1);
		}
		else
		{
			printf("-1\n");
		}
	}
	
	
	return 0;
}

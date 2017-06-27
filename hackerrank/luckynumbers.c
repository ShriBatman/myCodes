#include<stdio.h>

int main()
{
	long long int i,j,k,l,m,n,t,r;
	
	scanf("%lld",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		
		if(n%4==0 || n%7==0)
		printf("Yes\n");
		else
		{
			k=0;
			r=n/7;
			for(j=r;j>0;j--)
			{
				m=n-(7*j);
				if(m%4==0)
				{
					k=1;
					printf("Yes\n");
					break;
				}
			}
			if(k==0)
			printf("No\n");
		}
		
	}
	return 0;
}

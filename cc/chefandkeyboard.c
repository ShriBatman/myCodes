#include<stdio.h>

int main()
{
	long long int n,m,x,c,i,j,k,l,r,t;
	scanf("%lld",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld%lld",&n,&m,&c);
		x=0;
		if(n*m>=c)
		{
			
			for(j=1;j<=n;j++)
			{
				if(c%j==0 && c/j<=m)
				{
					x++;
				}
			}
			printf("%lld\n",x);
			
		}
		else
		printf("0\n");
		
		
	}
	return 0;
}

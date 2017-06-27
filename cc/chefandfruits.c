#include<stdio.h>

int main()
{
	int n,m,k,t,i,j,r;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d",&n,&m,&k);
		
		if(n>m)
		{
			if(n-m<=k)
			printf("0\n");
			else if(n-m>k)
			printf("%d\n",n-m-k);
		}
		else if(m>n)
		{
			if(m-n<=k)
			printf("0\n");
			else if(m-n>k)
			printf("%d\n",m-n-k);
		}
		else if(m==n)
		{
			printf("0\n");
		}
	}
	
	
	return 0;
}

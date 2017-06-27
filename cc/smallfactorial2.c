#include<stdio.h>

int main()
{
	int i,n,t,j;
	unsigned long long f=1;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		for(j=n;j>0;j--)
		{
			f=f*j;
		}
		printf("%llu\n",f);	
	}
	return 0;
}

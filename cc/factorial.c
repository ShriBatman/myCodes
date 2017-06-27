#include <stdio.h>

int main()
{
	int t,i,j;
	unsigned long int n,x,c;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%u",&n);
		x=1;
		for(j=n;j>0;j--)
		{
			x=x*j;
		}
		
		c=0;
		
		while(x%10==0)
		{
			c++;
			x=x/10;
		}
		
		printf("%d\n",c);
	}
	return 0;
}

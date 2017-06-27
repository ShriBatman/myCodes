#include<stdio.h>

int main()
{
	int i,t,c;
	unsigned long int n,j;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		c=0;
		scanf("%u",&n);
		
		for(j=2;j<n;j++)
		{
			if(n%j==0)
			{
				c=1;
				printf("no\n");
				break;
			}
			
		}
		
		if(c==0)
		{
			printf("yes\n");
		}
	
	}
	
	return 0;
}

#include<stdio.h>

int main()
{
	int t,i,r;
	unsigned long int n,j,rev,z;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%u",&n);
		z=n;
		rev=0;
		
		while(z!=0)
		{
			rev=rev*10;
			r=z%10;
			rev=rev+r;
			z=z/10;
		}
		
		if(rev==n)
		{
			printf("wins\n");
		}
		else
		{
			printf("losses\n");
		}
		
	}
	
	return 0;
}

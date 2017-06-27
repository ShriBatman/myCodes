#include<stdio.h>

int main()
{
	int t,i,max;
	unsigned long int r,j,n,k;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%u",&n);
		scanf("%u",&k);
		max=0;
		
		for(j=k;j>0;j--)
		{
			r=n%j;
			if(r>=max)
			{
				max=r;
			}
		}
		
		printf("%d\n",max);
		
	}
	
	return 0;
	
}

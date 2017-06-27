#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,t,x;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&k);
		
		x=(k+1)/2;
		
		if(k==1)
		{
			printf("1\n");
		}
		else
		{
			for(j=x;j<k;j++)
			{
				for(m=j;m>0;m--)
				{
					printf("%d\t",m);
				}
				for(l=k;l>j;l--)
				{
					printf("%d\t",l);
				}
				printf("\n");
			}
			for(j=0;j<x;j++)
			{
				for(m=j;m>0;m--)
				{
					printf("%d\t",m);
				}
				for(l=k;l>j;l--)
				{
					printf("%d\t",l);
				}
				printf("\n");
			}
		}
		
	}
	
	return 0;
}


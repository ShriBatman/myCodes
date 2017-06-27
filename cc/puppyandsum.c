#include<stdio.h>

int main()
{
    int i,j,k,t,n,d;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&d,&n);
		
		for(j=0;j<d;j++)
		{
		n=(n*(n+1))/2;
		}
		
		printf("%d\n",n);
	}
	
	return 0;
}

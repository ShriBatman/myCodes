#include<stdio.h>

int main()
{
	int t,i,bsal;
	float gsal;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&bsal);
		
		if(bsal<1500)
		{
			gsal=2*bsal;
		}
		else
		{
			gsal=bsal + (0.98)*bsal + 500;
		}
			printf("%g\n",gsal);
	}
	
	return 0;
}

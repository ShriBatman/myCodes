#include<stdio.h>

int main()
{
	int t,i;
	double q,exp,p;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lf",&q);
		scanf("%lf",&p);
		
		if(q>1000.0)
		{
			exp=(q*p)-((10.0*q*p)/100.0);
		}
		else
		{
			exp=q*p;
		}
		
		printf("%lf\n",exp);
	}
	
	
	return 0;
}

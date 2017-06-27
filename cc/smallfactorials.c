#include<stdio.h>

int main()
{
	double i,j,k,l,t,n;
	scanf("%lf",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lf",&n);
		
		double fac=1;
		
		for(j=n;j>0;j--)
		{
			fac=fac*j;
		}
		
		printf("%lf\n",fac);
	}
	
}

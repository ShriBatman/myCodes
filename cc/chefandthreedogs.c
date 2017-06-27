#include<stdio.h>

int main()
{
	double s,v,i,j,k,t;
	scanf("%lf",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lf%lf",&s,&v);
		
		printf("%.9lf\n",(2*s)/(3*v));
	}
	
	
	return 0;
}

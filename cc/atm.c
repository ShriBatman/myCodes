#include<stdio.h>

int main()
{
	int a;
	float x,y,z;
	scanf("%f",&x);
	scanf("%f",&y);
	a=x;
	
	if(x<y)
	{
			z=y-x-0.50;
		if(a%5==0 && z>=0)
		{
			printf("%.2f",z);
		}
		else
		{
			printf("%.2f",y);
		}
	}
	else
	{
		printf("%.2f",y);
	}
	
	return 0;
}

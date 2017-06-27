#include<stdio.h>
int main()
{
	int t,i,j;
	unsigned long int a,b,max,min;
	scanf("%d",&t);	
	for(i=0;i<t;i++)
	{
		scanf("%u",&a);
		scanf("%u",&b);
		max=a+b;
		if(a>=b)
		{
			min=a;
		}
		else
		{
			min=b;
		}
		printf("%u\t%u\n",min,max);
	}
	return 0;
}

#include<stdio.h>

int main()
{
	int t,i;
	unsigned long int a,b,c,max,smax;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%u",&a);
		scanf("%u",&b);
		scanf("%u",&c);
		
		if(a>b)
		{
			smax=b;
			max=a;
		}
		else
		{
			max=b;
			smax=a;
		}
		if(c>max)
		{
			smax=max;
			max=c;
		}
		if(c<max && c>smax)
		{
			smax=c;
		}
		
		printf("%u\n",smax);
	}
	
	return 0;
}

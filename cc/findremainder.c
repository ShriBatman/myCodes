#include<stdio.h>

int main()
{
	int a,b,i,t,r;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		
		r=a%b;
		
		printf("\n%d\n",r);
	}
	
	
	return 0;
}

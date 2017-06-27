#include<stdio.h>
#include<math.h>
int main()
{
	int t,b,l,i;
	float r1,r2;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&b);
		scanf("%d",&l);
		r1=sqrt(l*l-b*b);
		r2=sqrt(l*l+b*b);
		printf("%f\t%f\n",r1,r2);
	}
	return 0;
}

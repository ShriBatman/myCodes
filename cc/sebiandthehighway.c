#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,k,t,s,sg,fg,d;
	float m,n;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d%d%d",&s,&sg,&fg,&d,&k);
		
		n=(d*180)/k;
		m=s+n;
		
		if((fabs(m-sg))<(fabs(m-fg)))
		{
			printf("SEBI\n");
		}
		else if((fabs(m-sg))>(fabs(m-fg)))
		{
			printf("FATHER\n");
		}
		else if((fabs(m-sg))==(fabs(m-fg)))
		{
			printf("DRAW\n");
		}
		
		
	}
	return 0;
}

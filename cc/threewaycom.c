#include<stdio.h>
#include<math.h>

int main()
{
	int t,r,i,j;
	float r1,r2,r3;
	int s[2],sc[2],hs[2];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&r);
		scanf("%d",&s[0]);
		scanf("%d",&s[1]);
		scanf("%d",&sc[0]);
		scanf("%d",&sc[1]);
		scanf("%d",&hs[0]);
		scanf("%d",&hs[1]);
		
		r1=sqrt(((s[1]-sc[1])*(s[1]-sc[1]) + (s[0]-sc[0])*(s[0]-sc[0])));
		r2=sqrt(((s[1]-hs[1])*(s[1]-hs[1]) + (s[0]-hs[0])*(s[0]-hs[0])));
		r3=sqrt(((hs[1]-sc[1])*(hs[1]-sc[1]) + (hs[0]-sc[0])*(hs[0]-sc[0])));
		
		if(r1<=r && r2<=r)
		{
			printf("\nyes\n");
		}
		else if(r1<=r && r3<=r)
		{
			printf("\nyes\n");
		}
		else if(r2<=r && r3<=r)
		{
			printf("\nyes\n");
		}
		else
		{
			printf("\nno\n");
		}
	}
	
	
	
	return 0;
}


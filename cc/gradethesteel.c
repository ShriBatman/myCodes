#include<stdio.h>

int main()
{
	int t,i,j,l,r;
	float h,c,s;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%f%f%f",&h,&c,&s);
		
		if(h>50.0 && c<0.7 && s> 5600.0)
		{
			printf("10\n");
		}
		else if(h>50.0 && c<0.7)
		{
			printf("9\n");
		}
		else if(c<0.7 && s>5600.0)
		{
			printf("8\n");
		}
		else if(h>50.0 && s>5600.0)
		{
			printf("7\n");
		}
		else if(h>50.0 || c<0.7 || s> 5600.0)
		{
			printf("6\n");
		}
		else if(h<=50.0 && c>=0.7 && s<=5600.0)
		{
			printf("5\n");
		}
		
	}
	
	return 0;
}


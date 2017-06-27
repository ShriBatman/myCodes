#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		l=0;
		if(n>=2001)
		{
			for(j=2001;j<n;j++)
			{
				if(j%4==0 && j%400==0 && j%100==0)
				l++;
				else if(j%100!=0 && j%4==0)
				l++;
			}
			k=n-2001+l;
			k=k%7;
		}
		else if(n<2001)
		{
			for(j=n;j<2001;j++)
			{
				if(j%4==0 && j%400==0 && j%100==0)
				l++;
				else if(j%100!=0 && j%4==0)
				l++;
			}
			k=2001-n+l;
			k=7-k%7;
		}
						
		if(k==0 || k==7)
		printf("monday\n");
		else if(k==1)
		printf("tuesday\n");
		else if(k==2)
		printf("wednesday\n");
		else if(k==3)
		printf("thursday\n");
		else if(k==4)
		printf("friday\n");
		else if(k==5)
		printf("saturday\n");
		else if(k==6)
		printf("sunday\n");
		
	}
	
	return 0;
}

#include<stdio.h>

int main()
{
	int t,n,i;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		if(n<10)
		{
			printf("What an obedient servant you are!\n");
		}
		else
		{
			printf("-1\n");
		}
	}
	
	
	return 0;
}

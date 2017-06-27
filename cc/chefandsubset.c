#include<stdio.h>

int main()
{
	int i,j,k,t;
	long long int a,b,c,d;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&a);
		scanf("%lld",&b);
		scanf("%lld",&c);
		scanf("%lld",&d);
		
		if(a==0 || b==0 || c==0 || d==0)
		printf("Yes\n");
		else
		{
			if(a+b==0)
		        printf("Yes\n");
		    else if(a+c==0)
		    	printf("Yes\n");
		    else if(a+d==0)
				printf("Yes\n");
			else if(b+c==0)
				printf("Yes\n");
			else if(b+d==0)
				printf("Yes\n");
			else if(c+d==0)
				printf("Yes\n");
			else if(a+b+c+d==0)
				printf("Yes\n");
			else if(a+b+c==0)
				printf("Yes\n");
			else if(a+c+d==0)
				printf("Yes\n");
			else if(a+b+d==0)
				printf("Yes\n");
			else if(b+c+d==0)
				printf("Yes\n");
			else
				printf("No\n");
		}
		
	}
	return 0;
}

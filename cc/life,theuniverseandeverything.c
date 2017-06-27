#include<stdio.h>

int main()
{
	int n,i;
	while(1)
	{
		scanf("%d",&n);
		if(n==42 || n>=100 || n<0)
		{
			break;
		}
		else
		{
			printf("%d\n",n);
		}
	}
	return 0;
}

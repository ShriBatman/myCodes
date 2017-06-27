#include<stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	long long int a,b;
	
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld",&a,&b);
		
		if(a==b)
		printf("=\n");
		else if(a>b)
		printf(">\n");
		else if(a<b)
		printf("<\n");
	}
	return 0; 
}

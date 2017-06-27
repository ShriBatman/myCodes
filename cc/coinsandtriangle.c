#include<stdio.h>

int main()
{
	long long int n,j; 
	int i,k,l,m,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		
		j=1;
		while(n>=j)
		{
			n=n-j;
			if(n>j)
			j++;
		}
		
		printf("%lld\n",j);
	}
	return 0;
}

#include<stdio.h>

int main()
{
	int i,j,n,g;
	scanf("%d",&g);
	
	long long int m,k;
	
	for(i=0;i<g;i++)
	{
		scanf("%d",&n);
		
		long long int a[n];
		
		m=1000000000000;
		
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
			if(m>a[j])
			m=a[j];
		}
		
		k=0;
		for(j=0;j<n;j++)
		{
			k=k+a[j]-m;
		}
		
		if(n%2==0)
		{
		if(k%2==0)
		printf("L\n");
		else if(k%2!=0)
		printf("W\n");
		}
		else if(n==1)
		{
			if(m%2==0)
			printf("W\n");
			else if(m%2!=0)
			printf("L\n");
		}
		else if(n%2!=0)
		{
			if(k%2==0)
			{
				if(((m+1)%2*n%2)%2==0)
				printf("L\n");
				else if(((m+1)%2*n%2)%2!=0)
				printf("W\n");
				
			}
			else if(k%2!=0)
			{
				if(((m+1)%2*n%2)%2==0)
				printf("W\n");
				else if(((m+1)%2*n%2)%2!=0)
				printf("L\n");
			}
		}
	}
	
	
	
	
	return 0;
}

#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,t,r;
	
	scanf("%d",&n);
	
	t=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			k=n/i;
			if(k%2==0)
			{
				t=t+k/2-1;
			}
			else
			{
				t=t+k/2;
			}
		}
	}
	
	printf("%d\n",t);
	
	
	return 0;
}

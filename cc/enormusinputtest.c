#include<stdio.h>

int main()
{
	long int n,k;
	int i,count=0;
	scanf("%ld",&n);
	scanf("%ld",&k);
	long int t[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld",&t[i]);
	}
	for(i=0;i<n;i++)
	{
		if(t[i]%k==0)
		{
			count++;
		}
	}
	printf("%d",count);
	
	return 0;
}

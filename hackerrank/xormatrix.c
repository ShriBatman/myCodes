#include<stdio.h>

int main()
{
	long long int n,m,i,j,k,r;
	scanf("%lld%lld",&n,&m);
	
	long long int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	
	for(i=1;i<m;i++)
	{
		r=a[0];
		for(j=0;j<n;j++)
		{
			if(j==n-1)
			a[j]=a[j]^r;
			else
			a[j]=a[j]^a[j+1];
		}
	}
	
	for(k=0;k<n;k++)
	{
	printf("%lld\t",a[k]);
	}
	
	return 0;

}

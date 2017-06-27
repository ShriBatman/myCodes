#include<stdio.h>
#include<math.h>

int main()
{
	long long int i,j,k,l,t,r,n;
	scanf("%lld",&n);
	
	int arr[n];
	j=0;
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			arr[j]=i;
			j++;
			if(i!=sqrt(n))
			{
			arr[j]=n/i;
			j++;
			}
		}
	}
	
	j--;
	while(j>=0)
	{
		printf("%lld\n",arr[j]);
		j--;
	}
	
	
	return 0;
}

#include<stdio.h>

int main()
{
	int i,n;
	long long int j,k,l,m,t,h1,h2;
	scanf("%d",&n);
	
	long long int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	
	scanf("%lld%lld%lld",&m,&h1,&h2);
	
	t=m;
	k=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i]>=h1 && a[i+1]-a[i]<=h2)
		{
			if(t-a[i+1]+a[i]>=0)
			t=t-a[i+1]+a[i];
			else
			break;
		}
		else if(a[i+1]-a[i]>h2 && a[i+1]-a[i]<h1)
		{
			k=i;
			t=m;
		}
	}
	
	if(k==0)
	{
	if(t<=h2 && t>=h1)
	printf("%lld\n",a[k]-t);
	else if(t>h2)
	printf("%lld\n",a[k]-h2);
	else if(t<h1)
	printf("%lld\n",a[k]);
	}
	else
	{
    	if(t<=h2 && t>=h1 && a[k]-a[k-1]>h2)
	    printf("%lld\n",a[k]-t);
	}
	
	return 0;
}

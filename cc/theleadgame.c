#include<stdio.h>
int main()
{
	int n,i,j,max=0;
	int maxi=0;
	scanf("%d",&n);
	int t[n],s[n],l[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		t[i]=t[i]+t[i-1];
		s[i]=s[i]+s[i-1];
	}
	for(i=0;i<n;i++)
	{
		if(t[i]>=s[i])
		{
		l[i]=t[i]-s[i];
		if(l[i]>max)
		{
			max=l[i];
		}
		
		}
		else
		{
		l[i]=s[i]-t[i];
		if(l[i]>maxi)
		{
			maxi=l[i];
		}
		}
	}
	if(max>maxi)
	{
		printf("1");
		printf("\t%d",max);
	}
	if(max<maxi)
	{
		printf("2");
		printf("\t%d",maxi);
	}
	if(max==maxi)
	{
		printf("1,2");
		printf("\t%d",max);
	}
	return 0;
}

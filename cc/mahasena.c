#include<stdio.h>

int main()
{
	int i,j,k,t,n;
	scanf("%d",&t);
	
	int a[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	
	k=0;
	n=0;
	
	for(j=0;j<t;j++)
	{
		if(a[j]%2==0)
		{
			k++;
		}
		else
		{
			n++;
		}
	}
	
	if(k>n)
	{
		printf("READY FOR BATTLE\n");
	}
	else
	{
		printf("NOT READY\n");
	}
	
	return 0;
	
}

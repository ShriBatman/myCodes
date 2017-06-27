#include<stdio.h>

int main()
{
	unsigned long int i,j,t,temp,k,x;
	scanf ("%u",&t);
	unsigned long int n[t];
	
	for(i=0;i<t;i++)
	{
		scanf("%u",&n[i]);
	}
	
	for(j=0;j<t-1;j++)
	{
		for(x=0;x<t-j-1;x++)
		{
		if(n[x]>n[x+1])
		{
			temp=n[x+1];
			n[x+1]=n[x];
			n[x]=temp;
		}
		}
	}

	for(k=0;k<t;k++)
	{
		printf("%u\n",n[k]);
	}
	
	return 0;
}

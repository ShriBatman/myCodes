#include<stdio.h>

int factors(int z)
{
	if(z==0)
	{
		return -1;
	}
	
	long long int y,w;
	
	y=0;
	
	for(w=1;w<=z;w++)
	{
		if(z%w==0)
		{
			y++;
		}
	 }
	 
	 int prime=0;
	 
	 if(y==1)
	 {
	 	return -1;
	 }
	 if(y==2)
	 {
	 	return z;
	 }
	 
	 for(w=2;w<y;w++)
	 {
	 	if(y%w==0)
	 	{
	 		prime=1;
	 		break;
		 }
	 }
	 
	 if(prime==0)
	 {
	 	return z;
	 }
	 if(prime==1)
	 {
	 	return -1;
	 }
	 
	 return 0;
}

int main()
{
	int i,j,k,t,m,n,x;
	
	if((scanf("%d",&t))==1)
	{
	
	for(i=0;i<t;i++)
	{
		if((scanf("%d",&m))==1)
		{
		if((scanf("%d",&n))==1)
		{
		
		int c[n-m+1];
		k=0;
		
		for(j=m;j<=n;j++)
		{
			x=factors(j);
			if(x!=-1)
			{
				c[k]=x;
				k++;
			}
		}
		
		if(k!=0)
		{
			for(j=0;j<k;j++)
			{
				printf("%d\t",c[j]);
			}
			printf("\n");
		}
		else
		{
			printf("-1\n");
		}
		}
		}
		}
	}
	return 0;
}

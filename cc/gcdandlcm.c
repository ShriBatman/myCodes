#include<stdio.h>

int gcd(int a,int b)
{
	int x,y;
	
	if(a>b)
	{
		x=a;
		y=b;
	}
	else
	{
		x=b;
		y=a;
	}
	
	if(y==0)
	{
	return x;
	}
	else
	{
	gcd(y,x%y);
	}
	
}

int main()
{
	int i,k,a,b,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&a,&b);
		
		k=gcd(a,b);
		
		printf("%d %d\n",k,(a*b)/k);
	}
	
	return 0;	
}

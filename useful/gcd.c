#include<stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	
	c=gcd(a,b);
	printf("%d\n",c);
	return 0;	
}

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
	return x;
	
	else
	gcd(y,x%y);
}

#include<stdio.h>

long long int fac(int y)
{
	long long int a=1;
	int r;
	
	if(y==0)
	{
		return 1;
	}
	
	for(r=y;r>0;r--)
	{
		a=a*r;
	}
	
	return a;
}

int comb(int x)
{
	int l;
	int sum=0;
	
	for(l=0;l<=x;l++)
	{
		sum=sum+fac(x)/(fac(l)*fac(x-l));
	 } 
	 
	 return (sum);
}

int valid(int x,int z)
{
	int m,n;
	int sum=0;
	
	for(m=z-1;m>=0;m--)
	{
		sum=sum+fac(x)/(fac(m)*fac(x-m));
	}
	
	return sum;
	
}

int hcf(int a,int b)
{
	int i,j;
	int max=0;
	for(i=1;i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			max=i;
		}
	}
	
	return max;
	
}

int main()
{
	int i,j,k,m,n;
	long long int t;
	
	scanf("%d",&n);
	scanf("%d",&k);
	
	t=comb(n);
	i=valid(n,k);
	m=hcf(t,t-i);
	
	
	printf("%d/%d",(t-i)/m,t/m);
	
	return 0;
}

#include<stdio.h>
#include<math.h>

//********partial solution

long long int count(long long int x)
{
	long long int i,j,k,l,m,n;
	
	if(x==3)
	return 2;
	else
	{
		k=count(x-1);
		return ((2*k)+2)%1000000007;
	}
}

int main()
{
	int i,m,t;
	long long int y,x,n,l;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		
		l=0;
		
		if(n<=2)
		{
			printf("0\n");
		}
		else
		{
			l=count(n);
			printf("%lld\n",l);
		}
	}
	return 0;
}

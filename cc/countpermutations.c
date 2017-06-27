#include<stdio.h>
#include<math.h>

long long int ipow(long long int a, long long int exp)
{
    long long int result = 1;
    while (exp)
    {
        if (exp & 1)
		result = ((result%1000000007) * (a%1000000007))%1000000007;
		
        exp=exp/2;
        a = ((a%1000000007) * (a%1000000007))%1000000007;
}

    return result;
}

int main()
{
	int i,m,t;
	long long int y,j,k,x,n,l;
	
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
			j=2%1000000007;
			y=(n-1)%1000000007;
			x=ipow(j,y)%1000000007;
			printf("%lld\n",x-2);
		}
	}
	return 0;
}

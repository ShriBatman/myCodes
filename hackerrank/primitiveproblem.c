#include<stdio.h>
#include<math.h>

long long int ipow(long long int base,long long int exp,long long x)
{
	base %= x;
    long long int result = 1;
    while (exp)
    {
        if (exp & 1)
            result = (result *base)%x;
        exp=exp/2;
        base = (base*base)%x;
    }

    return result;
}

long long int power(long long int base,long long int exp)
{
    long long int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp=exp/2;
        base *= base;
    }

    return result;
}

int main()
{
	long long int i,j,k,l,m,n,t,r;
	
	scanf("%lld",&t);
	
	n = t-1;
	
	long long int a[100000];
	
	k=0;
	m=1;
	for(j=2;j<=sqrt(t-1);j++)
	{
		if(n%j==0)
		{
		//	printf("%lld\n",j);
			a[k]=(t-1)/j;
			k++;
			i=0;
			while(n%j==0)
			{
				i++;
				n=n/j;
			}
			
			m= m*power(j,i-1)*(j-1);
		}
		//if(j==2)
		//j--;	
	}
		if(n!=1)
		{
			m=m*(n-1);
		}
	
//	for(i=0;i<k;i++)
//	printf("%lld\n",a[i]);
	
	for(i=2;i<t;i++)
	{
		l=0;
		for(j=0;j<k;j++)
		{
			r=ipow(i,a[j],t);
			if(r==1)
			break;
			else
			l++;
		}
		if(l==k)
		{
			l=i;
			break;
		}
	}
	
	printf("%lld\t%lld\n",l,m);
	
	
	return 0;
}

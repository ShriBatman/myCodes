#include<stdio.h>

long long int ipow(long long int base,long long int exp)
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
	printf("%lld",ipow(2,0));
	return 0;
}

#include<stdio.h>

long long int ipow(long long int base,long long int exp)
{
    long long int result = 1;
    while (exp>0)
    {
        if (exp %2 == 1)
            result =result * base;
        exp=exp/2;
        base =base*base;
    }

    return result;
}

int main()
{
	printf("%lld",ipow(2,0));
	return 0;
}

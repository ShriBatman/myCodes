#include<stdio.h>
#include<math.h>
#include<time.h>
 
long long int prime(long long int number) 
{
    if (number <= 3 && number > 1) 
        return 1;            
    else if (number%2==0 || number%3==0 || number==1) 
        return 0;     
    else {
        long long int k;
        for (k=5; k<=sqrt(number); k+=6) {
            if (number % k == 0 || number%(k + 2) == 0) 
                return 0;
        }
        return 1; 
    }
}

int main()
{
	    clock_t start = clock();

	long long int k,i,j,m,s,n,r,t;
	
	scanf("%lld%lld",&n,&m);
	
	if(n>m)
	{
		i=n;
		n=m;
		m=i;
	}
	
	k=0;
	
	if(n<6)
	i=0;
	else
	i=n/6+1;
	
	if(m%6==0)
	r=m/6-1;
	else
	r=m/6;
	
	while(i<=r)
	{
		s=0;
		if(i==0 && n<=3 && m>=5)
		{
			k++;
		}
		else
		{
			s=prime(6*i-1);
			if(s)
			{
				j=6*i-1;
				s=prime(6*i+1);
				if(s)
				{
					t=6*i+1;
				}
				if(t-j==2 || j-t==2)
				k++;
			}
		}
		i++;
	}
	
	printf("%lld\n",k);
	
//clock_t stop = clock();
  //  double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
   // printf("Time elapsed in ms: %f", elapsed);
}

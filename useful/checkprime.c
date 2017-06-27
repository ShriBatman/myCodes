#include<stdio.h>
#include<math.h>

int main()
{
	long long int i,j,k,l,t,n;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		l=0;
		for(j=2;j<=sqrt(n)+1;j++)
		{
			if(n%j==0)
			{
				l=1;
				printf("no\n");
				break;
			}
		}
		if(l==0)
		{
			printf("yes\n");
		}
	}
	return 0;
}


//int IsPrime(unsigned int number) {
 //   if (number <= 3 && number > 1) 
   //     return 1;            // as 2 and 3 are prime
  //  else if (number%2==0 || number%3==0) 
  //      return 0;     // check if number is divisible by 2 or 3
 //   else {
    //    unsigned int i;
   //     for (i=5; i*i<=number; i+=6) {
  //          if (number % i == 0 || number%(i + 2) == 0) 
       //         return 0;
     //   }
   //     return 1; 
 //   }
//}

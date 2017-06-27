#include<stdio.h>

void prime(int a[]) 
{
	int x,y,z;
	z=0;
	for(x=2;x<=100000;x++)
	{
		y=0;
        if (x <= 3 && x > 1) 
        y=0;
        else if (x%2==0 || x%3==0) 
        y=1;
        else 
        {
           int i;
           for (i=5; i*i<=x; i+=6) 
	    	{
                if (x % i == 0 || x%(i + 2) == 0) 
                y=1;
            }
        }
        if(y==0)
		{
			a[z]=x;
			z++;
		}
   }
}

int main()
{
	int i,j,k,l,m,n;
	scanf("%d",&n);
	int a[10000]={0};
	prime(a);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		l=0;
		if(m==1)
		printf("Bob\n");
		else
		{
			while(a[l]<=m && a[l]!=0)
			{
				l++;
			}
			if((l)%2==0)
			printf("Bob\n");
			else
			printf("Alice\n");
		}
	}
	
	return 0;
}

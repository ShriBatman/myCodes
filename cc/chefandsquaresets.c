#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,k,l,m,n,t,r;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int a[n];
		r=0;
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(a[j-1]!=a[j] && j>0)
			{
				r=1;
			}
		}
		
		if(r==0)
		{
			printf("%d\n",r);
		}
		else
		{
			k=0;
			for(j=0;j<n;j++)
			{
				if(a[j]==1)
				{
					k++;
				}
				else if(a[j]!=2 && a[j]!=3)
				{
					if(a[j]%2==0 || a[j]%3==0)
					{
						k++;
					}
					else
					{
						for(m=5;m<=sqrt(a[j]);m+=6)
						{
							 if (a[j] % m == 0 || a[j]%(m + 2) == 0) 
							 {
							 	k++;
							 	break;
							 }
						}
					}
				}
			}
			
			if(k==0)
			{
				printf("%d\n",n);
			}
			else
			{
				printf("%d\n",k);
			}
		}
	}
	
	return 0;
}

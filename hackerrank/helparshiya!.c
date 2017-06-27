#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,t,r,e,o;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&r);
		e=0;
		//printf("%d\n%d\n",m,r);
		for(j=m;j<=r;j++)
		{
			//printf("%d\n",j);
			
			l=0;
			k=j;
			
			while(k>0)
			{
				n=k%10;
				
				if(n%2!=0)
				{
					l++;
				}
				
				k=k/10;
			}
			
			if(l%2==0 || l==0)
			{
				e++;
			}
		}
		
		printf("%d\n",e);
	}
	
	return 0;
}

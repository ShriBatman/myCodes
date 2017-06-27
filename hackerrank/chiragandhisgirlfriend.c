#include<stdio.h>

int main()
{
	int i,q,r,j,n,x,y;
	long long int s;
	
	scanf("%d%d",&n,&q);
	int row[q];
	int col[q];
	
	x=0;
	y=0;

	
	for(i=0;i<q;i++)
	{
		char c;
		scanf(" %c ",&c);
		scanf("%d",&r);
		
		int flag=0;
		s=0;
		
		if(c=='R' || c=='r')
		{
			for(j=0;j<x;j++)
			{
				if(row[j]==r)
				{
					printf("0\n");
					flag=1;
					break;
				}
			}
			row[x]=r;
			x++;
			
			if(flag==0)
			{
				s=((n)*(n+1)/2)+n*r;
				for(j=0;j<y;j++)
				{
					s=s-col[j]-r;
				}
			}
		}
		else if(c=='C' || c=='c')
		{
			for(j=0;j<y;j++)
			{
				if(col[j]==r)
				{
					printf("0\n");
					flag=1;
					break;
				}
			}
			col[y]=r;
			y++;
			
			if(flag==0)
			{
				s=((n)*(n+1)/2)+n*r;
				for(j=0;j<x;j++)
				{
					s=s-row[j]-r;
				}
			}
		}
		
		printf("%lld\n",s);
	}
	return 0;
}

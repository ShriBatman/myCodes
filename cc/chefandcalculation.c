#include<stdio.h>

int main()
{
	int i,j,k,l,m,t,p,y,n,s,w,z,flag;
	int v[6];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&p);
		int c[p];
		for(j=0;j<p;j++)
		{
			scanf("%d",&c[j]);
			
			int q[p][c[j]];
			
			for(k=0;k<c[j];k++)
			{
				scanf("%d",&q[j][k]);
			}
			
			for(n=0;n<6;n++)
			{
				v[n]=0;
			}
			
			n=0;
			while(n<6)
			{
			for(s=0;s<k;s++)
			{
				if(q[j][s]==n+1)
				{
					v[n]++;
				}
			}
			n++;
			}
			
			flag=10;
			w=0;
			for(z=0;z<6;z++)
			{
				if(v[z]==0)
				{
					w=w+1;
					flag=w;
				}
			}
			if(flag==10)
			{
				flag=0;
			}
			
			while(flag<=2)
			{
				n=0;
				if(flag==0)
				{
					c[j]=c[j]+4;
					while(n<6)
					{
						if(v[n]!=0)
						{
						v[n]=v[n]-1;
						}
						n++;
					}
				}
				
				if(flag==1)
				{
					c[j]=c[j]+2;
					while(n<6)
					{
						if(v[n]!=0)
						v[n]=v[n]-1;
						n++;
					}
				}
				
				if(flag==2)
				{
					c[j]=c[j]+1;
					while(n<6)
					{
						if(v[n]!=0)
						v[n]=v[n]-1;
						n++;
					}	
				}
				
				flag=10;
				w=0;
				for(z=0;z<6;z++)
				{
					if(v[z]==0)
					{
						w=w+1;
						flag=w;
					}
				}
				if(flag==10)
				{
					flag=0;
				}	
				
			}
		}
		
		int max=0;
		for(l=0;l<j;l++)
		{
			if(c[l]>max)
			{
				max=c[l];
				y=l+1;
			}
		}
		
		int x=0;
		for(m=0;m<j;m++)
		{
			if(max==c[m])
			{
				x++;
			}
		}
		
		if(x>1)
		{
			printf("tie\n");
		}
		else
		{
			if(y==1)
			{
				printf("chef\n");
			}
			else
			{
				printf("%d\n",y);
			}
		}
		
	}
	
	
	return 0;
}

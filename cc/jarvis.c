#include<stdio.h>
#include<string.h>

int main()
{
	long long int i,j,k,m,n,t,l,x,z,y;
	
	scanf("%lld",&t);
	char s[t][100000];
	char lcp[100000];
	
	for(i=0;i<t;i++)
	{
		fflush(stdin);
		scanf("%s",&s[i]);
	}
	
	scanf("%lld",&n);
	long long int q[n][2];
	
	for(j=0;j<n;j++)
	{
		long long int count=0;
		long long int min=0;
		
		for(k=0;k<2;k++)
		{
		scanf("%lld",&q[j][k]);
		}
		
		t=strlen(s[q[j][0]]);
		l=strlen(s[q[j][1]]);
		
		if(t>l)
		{
		min=l;
		}
		else
		{
		min=t;
		}
		
		for(m=0;m<min;m++)
		{
		if(s[q[j][0]-1][m]==s[q[j][1]-1][m])
		{
			count++;
		}
		else
		{
			break;
		}
		}
		
		if(count>0)
		{
			for(i=0;i<count;i++)
			{
				lcp[i]=s[q[j][0]-1][i];
			}
			
			long long int flag=0;
			
			for(x=0;x<t;x++)
			{
				z=0;
				for(y=0;y<strlen(s[x]);y++)
				{
					if(s[x][y]==lcp[z])
					{
						z++;
						if(z==count)
						{
							flag++;
							z=0;
							y=y-count+2;
						}
					}
					else
					{
						z=0;
					}
					
				}
			
			}
			
			printf("%lld\n",flag);
		}
		else
		{
			printf("0\n");
		}
		
	}
	
	return 0;
}

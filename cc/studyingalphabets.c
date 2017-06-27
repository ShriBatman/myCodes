#include<stdio.h>
#include<string.h>

int main()
{
	char s[27];
	char w[13];
	int n,i,a,c,k,j;
	
	scanf("%s",&s);
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s",&w);
		//c=0;
		
		for(j=0;j<strlen(s);j++)
		{
			for(k=0;k<strlen(w);k++)
			{
				if(s[j]==w[k])
				{
					for(c=k;c<strlen(w);c++)
					{
						w[c]=w[c+1];
					}
					k--;
				}
		}
			
		}
		
		if(strlen(w)==0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
		
	}	
	
	return 0;
	
	
}


#include<stdio.h>
#include<string.h>

int main()
{
	int t,i;
	int j,l,m;
	scanf("%d",&t);
	
	
	for(i=0;i<t;i++)
	{
		char d[100000];
		scanf("%s",&d);
		
		l=0,m=0;
		
		for(j=0;j<strlen(d);j++)
		{
			
			if(d[j]=='0')
			{
				l++;
				
			}
			else
			{
				m++;
			}
		}
		
		
		if(l==1 || m==1)
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

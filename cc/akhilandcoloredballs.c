#include<stdio.h>
#include<string.h>

int main()
{
	int i,t,j,n;
	scanf("%d",&t);
	char x[100001];

	for(i=0;i<t;i++)
	{
		scanf("%s",&x);
		
		n=strlen(x);
		char y[n+1];
		scanf("%s",&y);
						
		for(j=0;j<n;j++)
		{
			if(x[j]==y[j])
			{
				if(x[j]=='B')
				printf("W");
				else
				printf("B");
			}
			else
			{
				printf("B");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}


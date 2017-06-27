#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,l,k,m,n,r,t;
	char s[100001];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%s",&s);
		k=0;
		
		for(j=0;j<strlen(s);j++)
		{
			if(s[j]=='<' && s[j+1]=='>')
			{
				k++;
			}
		}
		printf("%d\n",k);
	}
	
	return 0;
}

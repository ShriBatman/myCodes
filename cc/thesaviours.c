#include<stdio.h>
#include<string.h>

char s[100001];

int main()
{
	int i,k,l,m,n,j,r,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%s",s);
		
		k=0;
		for(j=0;j<strlen(s);j++)
		{
			if(s[j]=='0' && (s[j-1]=='*' || s[j-2]=='*'))
			k=0;
			else if(s[j]=='*')
			k=0;
			else
			{
				k=1;
				break;
			}
		}
		
		if(k==1)
		printf("NO\n");
		else
		printf("YES\n");
		
	}
	return 0;
}

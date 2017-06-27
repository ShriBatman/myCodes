#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,b,t;
	char s[101];
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",&s);
		k=0;
		b=0;
		
		for(j=0;j<strlen(s);j++)
		{
			if(s[j]=='a')
			{
				k++;
			}
			else if(s[j]=='b')
			{
				b++;
			}
		}
		
		if(k>=b)
		printf("%d\n",b);
		else if(b>k)
		printf("%d\n",k);
	}
	return 0;
}

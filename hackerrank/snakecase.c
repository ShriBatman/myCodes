#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l,m,n;
	char s[101];
	
	scanf("%s",&s);
	k=0;
	
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!='_' && s[i+1]=='_')
		k++;
	}
	if(s[strlen(s)]=='_')
	printf("%d\n",k);
	else
	printf("%d\n",k+1);
	return 0;
}

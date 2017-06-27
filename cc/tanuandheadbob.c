#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l,m,n,t;
	scanf("%d",&t);
	
	char s[1001];
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		scanf("%s",&s);
		
		k=0;
		l=0;
		m=0;
		for(j=0;j<strlen(s);j++)
		{
			if(s[j]=='I')
			{
				k=1;
				printf("INDIAN\n");
				break;
			}
			else if(s[j]=='Y')
			l++;
			else if(s[j]=='N')
			m++;
		}
		
		if(k!=1 && l!=0)
		printf("NOT INDIAN\n");
		else if(k!=1 && l==0 && m!=0)
		printf("NOT SURE\n");
	}
	return 0;
}

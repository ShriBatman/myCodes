#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,t;
	scanf("%d",&t);
	
	char s[51];
	
	for(i=0;i<t;i++)
	{
		k=0;
		int c[26]={0};
		scanf("%s",&s);
		
		for(j=0;j<strlen(s);j++)
		{
			if(s[j]=='a')
			{
				c[1]++;
			}
			else if(s[j]=='b')
			{
				c[2]++;
			}
			else if(s[j]=='c')
			{
				c[3]++;
			}
			else if(s[j]=='d')
			{
				c[4]++;
			}
			else if(s[j]=='e')
			{
				c[5]++;
			}
			else if(s[j]=='f')
			{
				c[6]++;
			}
			else if(s[j]=='g')
			{
				c[7]++;
			}
			else if(s[j]=='h')
			{
				c[8]++;
			}
			else if(s[j]=='i')
			{
				c[9]++;
			}
			else if(s[j]=='j')
			{
				c[10]++;
			}
			else if(s[j]=='k')
			{
				c[11]++;
			}
			else if(s[j]=='l')
			{
				c[12]++;
			}
			else if(s[j]=='m')
			{
				c[13]++;
			}
			else if(s[j]=='n')
			{
				c[14]++;
			}
			else if(s[j]=='o')
			{
				c[15]++;
			}
			else if(s[j]=='p')
			{
				c[16]++;
			}
			else if(s[j]=='q')
			{
				c[17]++;
			}
			else if(s[j]=='r')
			{
				c[18]++;
			}
			else if(s[j]=='s')
			{
				c[19]++;
			}
			else if(s[j]=='t')
			{
				c[20]++;
			}
			else if(s[j]=='u')
			{
				c[21]++;
			}
			else if(s[j]=='v')
			{
				c[22]++;
			}
			else if(s[j]=='w')
			{
				c[23]++;
			}
			else if(s[j]=='x')
			{
				c[24]++;
			}
			else if(s[j]=='y')
			{
				c[25]++;
			}
			else if(s[j]=='z')
			{
				c[0]++;
			}
		}
		
		for(j=0;j<26;j++)
		{
			if((c[j]==strlen(s)/2) && strlen(s)%2==0)
			{
				k=1;
				printf("YES\n");
				break;
			}
		}
		if(k==0)
		{
			printf("NO\n");
		}
		
	}
	return 0;
}

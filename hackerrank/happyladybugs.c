#include<stdio.h>
#include<string.h>

int main()
{
	int g,n,i,j,k;
	scanf("%d",&g);
	
	for(i=0;i<g;i++)
	{
		scanf("%d",&n);
		int c[27]={0};
		char s[n+1];
		fflush(stdin);
		scanf("%s",&s);
		k=0;
		
		for(j=0;j<strlen(s);j++)
		{
			if(s[j]=='_')
			{
				c[0]++;
			}
			else if(s[j]=='A')
			{
				c[1]++;
			}
			else if(s[j]=='B')
			{
				c[2]++;
			}
			else if(s[j]=='C')
			{
				c[3]++;
			}
			else if(s[j]=='D')
			{
				c[4]++;
			}
			else if(s[j]=='E')
			{
				c[5]++;
			}
			else if(s[j]=='F')
			{
				c[6]++;
			}
			else if(s[j]=='G')
			{
				c[7]++;
			}
			else if(s[j]=='H')
			{
				c[8]++;
			}
			else if(s[j]=='I')
			{
				c[9]++;
			}
			else if(s[j]=='J')
			{
				c[10]++;
			}
			else if(s[j]=='K')
			{
				c[11]++;
			}
			else if(s[j]=='L')
			{
				c[12]++;
			}
			else if(s[j]=='M')
			{
				c[13]++;
			}
			else if(s[j]=='N')
			{
				c[14]++;
			}
			else if(s[j]=='O')
			{
				c[15]++;
			}
			else if(s[j]=='P')
			{
				c[16]++;
			}
			else if(s[j]=='Q')
			{
				c[17]++;
			}
			else if(s[j]=='R')
			{
				c[18]++;
			}
			else if(s[j]=='S')
			{
				c[19]++;
			}
			else if(s[j]=='T')
			{
				c[20]++;
			}
			else if(s[j]=='U')
			{
				c[21]++;
			}
			else if(s[j]=='V')
			{
				c[22]++;
			}
			else if(s[j]=='W')
			{
				c[23]++;
			}
			else if(s[j]=='X')
			{
				c[24]++;
			}
			else if(s[j]=='Y')
			{
				c[25]++;
			}
			else if(s[j]=='Z')
			{
				c[26]++;
			}
		}
		
		for(j=0;j<strlen(s);j++)
		{
			if((s[j]!=s[j-1] && s[j]!=s[j+1]) && s[j]!='_')
			{
				k=1;
				break;
			}
		}
		
		if(k==1)
		{
			if(c[1]==1 || c[2]==1 || c[3]==1 || c[4]==1 || c[5]==1 || c[6]==1 || c[7]==1 || c[8]==1 || c[9]==1 || c[10]==1 || c[11]==1 || c[12]==1 ||c[13]==1||c[14]==1||c[15]==1||c[16]==1||c[17]==1||c[18]==1||c[19]==1||c[20]==1||c[21]==1||c[22]==1||c[23]==1||c[24]==1||c[25]==1||c[26]==1)
			printf("NO\n");
			else if(c[0]==0)
			printf("NO\n");
			else
			printf("YES\n");
		}
		else
		{
			printf("YES\n");
		}
		
		
	}
	
	
	return 0;
}

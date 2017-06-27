#include<stdio.h>
#include<string.h>

int main()
{
	int w,i,j,k,l,m,n,t,x,y,z;
	scanf("%d",&t);
	
	char s[1000][1001];
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d",&n,&m,&k);
		
		w=0;
		l=0;
		
		char q[2][k+1];
		
		for(j=0;j<n;j++)
		{
			scanf("%s",&s[j]);
		}
		
		for(j=0;j<k;j++)
		{
			q[0][j]='O';
			q[1][j]='X';
		}
		
				
		for(j=0;j<m;j++)
		{
			if(strstr(s[j],q[0])!=NULL && w==0)
		{
			w++;
		}
		else if(strstr(s[j],q[1])!=NULL && l==0)
		{
			l++;
		}
		}		
		
		
		if(l==0 || w==0)
		{
		for(j=0;j<m;j++)
		{
			z=1;
			y=1;
			for(x=0;x<n;x++)
			{
			if(s[x][j]=='X' && s[x+1][j]=='X' && l==0)
			{
				y++;
			}
			else
			{
				if(y>=k)
				l++;
				
				y=0;
			}
			if(s[x][j]=='O' && s[x+1][j]=='O' && w==0)
			{
				z++;
			}
			else
			{
				if(z>=k)
				w++;
				
				z=0;
			}
			
			if(l!=0 && w!=0)
			break;
			
			}
		}
		}
		
		if(l==0 || w==0)
		{
			j=0;
			x=0;
			z=1;
			y=1;
			while(j==x && j<n && x<m)
			{
				if(s[j][x]=='X' && s[j+1][x+1]=='X' && l==0)
				{
					y++;
				}
				else
				{
					if(y>=k)
					l++;
					
					y=0;
				}
				
				if(s[j][x]=='O' && s[j+1][x+1]=='O' && w==0)
				{
					z++;
				}
				else
				{
					if(z>=k)
					w++;
					
					z=0;
				}
				
				j++;
				x++;
				
				if(l!=0 && w!=0)
				break;
			}
		}
		
		if(l==0 || w==0)
		{
			z=1;
			y=1;
			for(j=0,x=m;j<n,x>=0;j++,x--)
			{
				if(s[j][x]=='X' && s[j+1][x-1]=='X' && l==0)
				{
					y++;
				}
				else
				{
					if(y>=k)
					l++;
					
					y=0;
				}
				
				if(s[j][x]=='O' && s[j+1][x-1]=='O' && w==0)
				{
					z++;
				}
				else
				{
					if(z>=k)
					w++;
					
					z=0;
				}
				
				if(l!=0 && w!=0)
				break;
			}
		}
				
		if(l>=1 && w>=1)
		printf("NONE\n");
		else if(l==0 && w>=1)
		printf("WIN\n");
		else if(l>=1 && w==0)
		printf("LOSE\n");
		else if(w==0 && l==0)
		printf("NONE\n");
	}
	
	return 0;
}

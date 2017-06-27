#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l,m,n,t;
	scanf("%d%d",&n,&m);
	
	char x;
	char s[20][21];
	
	for(i=0;i<n;i++)
	{
		scanf("%s",&s[i]);
	}
	
	int b,r,d,c;
	t=0;
	l=0;
	b=n-1;
	r=m-1;
	d=0;
	c=0;
	
	if(s[b][0]=='#')
	c=-1;
	
	while(t<=b && l<=r)
	{
		if(d==0)
		{
			for(i=b;i>=t;i--)
			{
				x=s[i][l];
				if(s[i+1][l]!='#' && s[i][l]=='#')
				c++;
			}
			d++;
			l++;
		}
		else if(d==1)
		{
			for(i=l;i<=r;i++)
			{
				x=s[t][i];
				if(s[t][i-1]!='#' && s[t][i]=='#')
				c++;
			}
			d++;
			t++;
		}
		else if(d==2)
		{
			for(i=t;i<=b;i++)
			{
				x=s[i][r];
				if(s[i-1][r]!='#' && s[i][r]=='#')
				c++;
			}
			d++;
			r--;
		}
		else if(d==3)
		{
			x=s[b][i];
			for(i=r;i>=l;i--)
			{
				if(s[b][i+1]!='#' && s[b][i]=='#')
				c++;
			}
			d++;
			b--;
		}
		d=d%4;
	}
	
	
	if(x!='#')
	printf("%d\n",c+1);
	else if(x=='#')
	printf("%d\n",c);
	return 0;
}

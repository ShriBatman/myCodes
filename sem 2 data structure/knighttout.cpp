#include<stdio.h>
#define n 5


void print(int a[n][n])
{
	int x,y;
	for(x=0;x<n;x++)
	{
		for(y=0;y<n;y++)
		{
			printf("%d\t",a[x][y]);
		}
		printf("\n");
	}
}

bool check(int x,int y,int a[n][n])
{
	return (x>=0 && x<n && y>=0 && y<n && a[x][y]==-1);
}

bool tour(int x,int y,int move,int a[n][n],int movex[8],int movey[8])
{
	int i,nextx,nexty;
	
	if(move==n*n)
	{
		return true;
	}
	
	for(i=0;i<8;i++)
	{
		nextx=x+movex[i];
		nexty=y+movey[i];
		if(check(nextx,nexty,a))
		{
			a[nextx][nexty]=move;
			if(tour(nextx,nexty,move+1,a,movex,movey)==true)
			{
				return true;
			}
			else
			{
			   a[nextx][nexty]=-1;
			}
		}
	}
	return false;
}

bool knight()
{
	int a[n][n];
	int x,y;
	
	for(x=0;x<n;x++)
	{
		for(y=0;y<n;y++)
		{
			a[x][y]=-1;
		}
	}
	
	a[0][0]=0;
	
	int movex[8]={2,1,-1,-2,-2,-1,1,2};
	int movey[8]={1,2,2,1,-1,-2,-2,-1};
	
	if(tour(0,0,1,a,movex,movey)==false)
	{
		printf("solution not exist\n");
		return false;
	}
	else
	{
		print(a);
	}
	
	return true;
}


int main()
{
	knight();
	return 0;
}

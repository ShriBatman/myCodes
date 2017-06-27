#include<stdio.h>
#define n 4

bool check(int maze[n][n],int x,int y)
{
	return (x>=0 && x<n && y>=0 && y<n && maze[x][y]==1);
}

void print(int solu[n][n])
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",solu[i][j]);
		}
		printf("\n");
	}
}

bool solvemaze(int maze[n][n],int x,int y,int solu[n][n])
{
	if(x==n-1 && y==n-1)
	{
		solu[x][y]=1;
		return true;
	}
	
	if(check(maze,x,y)==true)
	{
		solu[x][y]=1;
		
		if(solvemaze(maze,x+1,y,solu)==true)
		{
		return true;
		}
		
		if(solvemaze(maze,x,y+1,solu)==true)
		{
			return true;
		}
		
		solu[x][y]=0;
		return false;
	}
	
	return false;
}

bool solve(int maze[n][n])
{
	int solu[n][n]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	if(solvemaze(maze,0,0,solu)==false)
	{
		printf("solution not exist\n");
		return false;
	}
	
	print(solu);
	return true;
}

int main()
{
	int maze[n][n]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
	
	solve(maze);
	
	return 0;
}

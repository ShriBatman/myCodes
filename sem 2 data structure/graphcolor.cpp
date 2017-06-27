#include<stdio.h>
#define v 4

void print(int color[])
{
	int i;
	
	for(i=0;i<v;i++)
	{
		printf("%d\t",color[i]);
	}
}

bool check(int graph[v][v],int c,int color[],int x)
{
	int i;
	
	for(i=0;i<v;i++)
	{
		if(graph[x][i]==1 && c==color[i])
		{
			return false;
		}
	}
	return true;
	
	
}

bool solvegraph(int graph[v][v],int x,int m,int color[])
{
	int c;
	
	if(x==v)
	{
	return true;
	}
	
	for(c=1;c<=m;c++)
	{
		if(check(graph,c,color,x))
		{
			color[x]=c;
			
			if(solvegraph(graph,x+1,m,color)==true)
			{
				return true;
			}
			
			color[x]=0;
		}
	}
	return false;
}

bool graphcolor(int graph[v][v],int m)
{
	int i;
	int color[v];
	
	for(i=0;i<v;i++)
	{
		color[i]=0;
	}
	
	if(solvegraph(graph,0,m,color)==false)
	{
		printf("solution not exist\n");
		return false;
	}
	
	print(color);
	return true;
}


int main()
{
	int graph[v][v]={{0,1,1,1},{1,0,1,0},{1,1,0,1},{1,0,1,0}};
	int m;
	scanf("%d",&m);
	
	graphcolor(graph,m);
	return 0;
	
}

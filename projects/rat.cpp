//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
#include<iostream>
#include<Windows.h>

using namespace std;

#define nn 20
char solution[nn][nn];
//down==1 up==0 left==2 right==3

bool safe(int maze[nn][nn],int x,int y)
 {
		if (x >= 0 && y >= 0 && x < nn  && y < nn && maze[x][y] != 0)
		 {
			return true;
		}
		return false;
}

bool pathfinder(int maze[nn][nn],int x,int y,int u,int v,int direction) 
{
		
		if(x==u && y==v)
		{
				solution[x][y] = '+';
				return true;
		}
		
		if (safe(maze,x,y))
		 {
			solution[x][y] = '+';
			
			if( direction!=0 && pathfinder(maze,x+1,y,u,v,1) )
			{
				return true;
			}
			if( direction!=2 && pathfinder(maze,x,y+1,u,v,3) )
			{
				return true;
			}
			if( direction!=1 && pathfinder(maze,x-1,y,u,v,0))
			{
				return true;
			}
			if(direction!=3 &&  pathfinder(maze,x,y-1,u,v,2))
			{
				return true;
			}
			
			solution[x][y] = '#';
			return false;
		}
		
		return false;
}
	
	
void print()
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );

	cout<<"\n";
	for (int i = 0; i < nn; i++) 
	{	cout<<"  ";
		for (int j = 0; j < nn; j++) 
		{
			if(solution[i][j]=='#')
			{
				SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<solution[i][j]<<" ";
			}
			else
			{
				SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				cout<<solution[i][j]<<" ";
			}
		}
		cout<<"\n";
	}
	cout<<"\n";
	
}
	
void solveMaze(int maze[nn][nn],int x,int y,int u,int v)
 {
 	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
 	
 	if(safe(maze,u,v)==false)
	{
	    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout<<"\nTHE EXIST IS BLOCKED\n";
	}
 	else if(pathfinder(maze,x,y,u,v,1)) 
	{
		print();
	}
	else
	{
		SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout<<"\nNO PATH FOUND\n";
	}
}

int main()
{
	long long int i,j,k,l,m,n,t,x,y,u,v;
	
	int maze[nn][nn];
	 	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);

	cout<<"----------------------------------------------------MAZE SOLVER-----------------------------------------------------\n\n";
	
	cout<<"PLEASE ENTER THE ENTRY POINT OF THE MAZE\n";
	
	cin>>x>>y;
	
	cout<<"PLEASE ENTER THE EXIST POINT OF THE MAZE\n";
	
	cin>>u>>v;
	
	cout<<"PLEASE ENTER THE MAZE\n";
	
	for(i=0;i<nn;i++)
	{
		for(j=0;j<nn;j++)
		{
			cin>>maze[i][j];
		}
	}
	
	memset(solution,'#',sizeof(solution));
	
	solveMaze(maze,x-1,y-1,u-1,v-1);
	
    return 0;
}

//Test Cases
/*n=4
1 1 0 0
1 1 0 0
1 0 0 0
1 1 1 1
*/

/*n=5
1 0 1 1 1
1 1 1 0 1
0 0 0 1 1
0 0 0 1 0
0 0 0 1 1
*/

/*n=6
1 1 1 1 1 1
1 1 0 0 1 1
1 0 1 0 1 0
1 0 1 1 1 0
0 0 1 0 0 0
0 0 1 1 1 1
*/

/*n=8
1 1 1 1 1 1 1 1
1 0 0 0 1 1 1 1
1 0 1 0 1 0 0 0
0 0 0 1 1 0 0 0
0 0 1 1 0 0 0 0
0 0 1 0 1 1 1 0
1 0 1 1 1 0 1 1
1 0 0 0 0 0 0 1
*/

/*n=8
1 1 1 1 1 1 1 1
1 0 0 0 0 0 0 1
1 0 1 1 1 1 0 1
1 0 1 0 0 1 0 1
1 0 1 0 0 0 0 1
1 0 1 1 1 1 1 1
1 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1
*/

/*n=10
1,7 =0
1 1 1 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0 0 1
0 0 0 0 0 0 0 0 0 1
0 0 0 1 1 1 0 0 0 1
0 0 0 1 0 1 1 1 1 1
0 0 1 1 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 0
0 0 1 1 1 0 0 0 0 0
0 0 0 0 1 0 1 1 1 0
0 0 0 0 1 1 1 0 1 1
*/

/*n=20
1 1 1 1 1 0 0 0 1 1 1 0 0 0 1 1 0 0 1 1
0 0 0 0 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0
0 0 0 0 1 0 1 0 0 0 0 0 0 0 0 0 1 0 0 0
0 0 0 0 1 0 1 0 1 1 1 0 0 0 0 1 1 0 0 0
0 0 1 1 1 0 1 0 1 0 1 0 0 0 0 1 0 0 0 0
1 1 1 1 1 0 1 0 1 0 1 0 0 0 0 1 1 0 0 0
0 0 1 0 0 0 0 0 1 1 1 0 0 0 0 0 1 0 0 0
1 0 1 0 1 1 0 1 0 1 0 0 0 0 0 0 1 0 0 0
1 0 1 0 0 0 0 0 0 1 0 0 0 0 0 0 1 0 0 0
0 0 1 0 0 0 0 1 0 1 0 0 0 0 0 0 1 0 0 0
0 0 1 0 0 1 1 0 0 1 0 0 0 0 0 0 1 0 0 0
0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0
1 0 1 0 0 0 0 0 0 0 1 1 0 0 0 0 1 0 0 0
0 0 1 1 1 1 1 0 0 0 0 1 0 0 0 0 1 1 1 1
*/

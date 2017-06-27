//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,u,v,x,y;
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		
		cin>>u>>v>>x>>y;
		
		if(u==1 && v==1)
		{
			if(x==n && y==m && n%2!=0)
			cout<<"Over\n";
			else if(n%2==0 && x==n && y==1)
			cout<<"Over\n";
			else if(x%2==0)
			{
				if(y!=1)
				cout<<"Left\n";
				else
				cout<<"Back\n";
			}
			else if(x%2!=0)
			{
				if(y!=m)
				cout<<"Right\n";
				else
				cout<<"Back\n";
			}
		}
		else if(u==1 && v==m)
		{
			if(x==n && y==m && n%2==0)
			cout<<"Over\n";
			else if(n%2!=0 && x==n && y==1)
			cout<<"Over\n";
			else if(x%2==0)
			{
				if(y!=m)
				cout<<"Right\n";
				else
				cout<<"Back\n";
			}
			else if(x%2!=0)
			{
				if(y!=1)
				cout<<"Left\n";
				else
				cout<<"Back\n";
			}
		}
		else if(u==n && v==1)
		{
			if(x==1 && y==1 && n%2==0)
			cout<<"Over\n";
			else if(n%2!=0 && x==1 && y==m)
			cout<<"Over\n";
			else if((n-x)%2==0)
			{
				if(y!=m)
				cout<<"Right\n";
				else
				cout<<"Front\n";
			}
			else if((n-x)%2!=0)
			{
				if(y!=1)
				cout<<"Left\n";
				else
				cout<<"Front\n";
			}
		}
		else if(u==n && v==m)
		{
			if(x==1 && y==m && n%2==0)
			cout<<"Over\n";
			else if(n%2!=0 && x==1 && y==1)
			cout<<"Over\n";
			else if((n-x)%2==0)
			{
				if(y!=1)
				cout<<"Left\n";
				else
				cout<<"Front\n";
			}
			else if((n-x)%2!=0)
			{
				if(y!=m)
				cout<<"Right\n";
				else
				cout<<"Front\n";
			}
		}
		
	}
	
    return 0;
}


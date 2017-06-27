#include<bits/stdc++.h>

using namespace std;

void print6(char vow[],char con[],int n)
{
	for(int l=0;l<5;l++)
	{
	for(int w=0;w<20;w++)
	{
	for(int q=0;q<5;q++)
	{
	for(int z=0;z<20;z++)
	{
		for(int h=0;h<5;h++)
		{
				for(int m=0;m<20;m++)
				{
					for(int j=0;j<n-1;j++)
					{
						if(j==0)
						cout<<vow[l];
						else if(j==1)
						cout<<con[w];
						else if(j==2)
						cout<<vow[q];
						else if(j==3)
						cout<<con[z];
						else if(j==4)
						cout<<vow[h];
					}
					cout<<con[m]<<endl;
				}
		}
	}
	}
	}
	}
	for(int l=0;l<20;l++)
	{
	for(int w=0;w<5;w++)
	{
	for(int q=0;q<20;q++)
	{
	for(int z=0;z<5;z++)
	{
		for(int h=0;h<20;h++)
		{
				for(int m=0;m<5;m++)
				{
					for(int j=0;j<n-1;j++)
					{
						if(j==0)
						cout<<con[l];
						else if(j==1)
						cout<<vow[w];
						else if(j==2)
						cout<<con[q];
						else if(j==3)
						cout<<vow[z];
						else if(j==4)
						cout<<con[h];
					}
					cout<<vow[m]<<endl;
				}
		}
	}
}
}
}
}

void print5(char vow[],char con[],int n)
{
	for(int w=0;w<20;w++)
	{
	for(int q=0;q<5;q++)
	{
	for(int z=0;z<20;z++)
	{
		for(int h=0;h<5;h++)
		{
				for(int m=0;m<20;m++)
				{
					for(int j=0;j<n-1;j++)
					{
						if(j==0)
						cout<<con[w];
						else if(j==1)
						cout<<vow[q];
						else if(j==2)
						cout<<con[z];
						else if(j==3)
						cout<<vow[h];
					}
					cout<<con[m]<<endl;
				}
		}
	}
	}
	}
	for(int w=0;w<5;w++)
	{
	for(int q=0;q<20;q++)
	{
	for(int z=0;z<5;z++)
	{
		for(int h=0;h<20;h++)
		{
				for(int m=0;m<5;m++)
				{
					for(int j=0;j<n-1;j++)
					{
						if(j==0)
						cout<<vow[w];
						else if(j==1)
						cout<<con[q];
						else if(j==2)
						cout<<vow[z];
						else if(j==3)
						cout<<con[h];
					}
					cout<<vow[m]<<endl;
				}
		}
	}
}
}
}

void printu(char vow[],char con[],int n)
{
	for(int q=0;q<5;q++)
	{
	for(int z=0;z<20;z++)
	{
		for(int h=0;h<5;h++)
		{
				for(int m=0;m<20;m++)
				{
					for(int j=0;j<n-1;j++)
					{
						if(j==0)
						cout<<vow[q];
						else if(j==1)
						cout<<con[z];
						else if(j==2)
						cout<<vow[h];
					}
					cout<<con[m]<<endl;
				}
		}
	}
	}
	for(int q=0;q<20;q++)
	{
	for(int z=0;z<5;z++)
	{
		for(int h=0;h<20;h++)
		{
				for(int m=0;m<5;m++)
				{
					for(int j=0;j<n-1;j++)
					{
						if(j==0)
						cout<<con[q];
						else if(j==1)
						cout<<vow[z];
						else if(j==2)
						cout<<con[h];
					}
					cout<<vow[m]<<endl;
				}
		}
	}
}
}

void print(char vow[],char con[],int n)
{
	for(int z=0;z<20;z++)
	{
		for(int h=0;h<5;h++)
		{
				for(int m=0;m<20;m++)
				{
					for(int j=0;j<n-1;j++)
					{
						if(j==0)
						cout<<con[z];
						else if(j==1)
						cout<<vow[h];
					}
					cout<<con[m]<<endl;
				}
		}
	}
	for(int z=0;z<5;z++)
	{
		for(int h=0;h<20;h++)
		{
				for(int m=0;m<5;m++)
				{
					for(int j=0;j<n-1;j++)
					{
						if(j==0)
						cout<<vow[z];
						else if(j==1)
						cout<<con[h];
					}
					cout<<vow[m]<<endl;
				}
		}
	}
}

void printr(char vow[],char con[],int n)
{
				for(int z=0;z<5;z++)
				{	
				for(int m=0;m<20;m++)
				{
					for(int j=0;j<n-1;j++)
					{
					
						cout<<vow[z];
					
					}
					cout<<con[m]<<endl;
				}
				}
				for(int z=0;z<20;z++)
				{
				for(int m=0;m<5;m++)
				{
					for(int j=0;j<n-1;j++)
					{
						cout<<con[z];
					}
					cout<<vow[m]<<endl;
				}
				}
}

int main()
{
	int i,j,l,m,n,r,t;
	
	cin>>n;
	char vow[]={'a','e','i','o','u'};
	char con[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','t','s','v','w','x','z'};
		
	
		if(n==1)
		{
			for(char i=97;i<=122;i++)
			{
				if(i!=121)
				cout<<i<<endl;
			}
		}
		else if(n==2)
		{
			printr(vow,con,n);
		}
		else if(n==3)
		{
			print(vow,con,n);
		}
		else if(n==4)
		{
			printu(vow,con,n);
		}
		else if(n==5)
		{
			print5(vow,con,n);
		}
		else if(n==6)
		{
			print6(vow,con,n);
		}
	
	return 0;
}

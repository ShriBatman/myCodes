//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,c,y,z;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>r>>c;
		
		vector< vector<char> > a;
		char x;
		z=0;//number of ?
		for(j=0;j<r;j++)
		{
			vector<char>b;
			for(l=0;l<c;l++)
			{
				cin>>x;
				if(x=='?')z++;
				b.push_back(x);
			}
			a.push_back(b);
		}
		
		if(z==0)
		{
						cout<<"Case #"<<i+1<<": \n";

			for(j=0;j<r;j++)
			{
				for(l=0;l<c;l++)
				cout<<a[j][l];
				
				cout<<"\n";
			}
		}
		else
		{
			z=0;
			vector<int> e(r,0);
			for(j=0;j<r;j++)
			{
				z=0;
				for(l=0;l<c;l++)
				{
					if(a[j][l]=='?')
					{
						if(a[j][l-1]!='?' && l!=0)
						{
							a[j][l]=a[j][l-1];
						}
						else if(a[j][l+1]!='?' && l!=c-1)
						{
							if(z>0)
							{
								while(z!=0)
								{
									a[j][l-z]=a[j][l+1];
									z--;
								}
								a[j][l]=a[j][l+1];
							}
							else
							a[j][l]=a[j][l+1];

						}
						else
						z++;
					}
				}
				if(z==c)
				{
					e[j]=1;
				}
			}
			z=0;
			for(j=0;j<r;j++)
			{
				if(e[j]==1)
				{
					if(e[j-1]==0 && j!=0)
					{
						a[j]=a[j-1];e[j]=0;
					}
					else if(e[j+1]==0 && j!=r-1)
					{
						if(z>0)
						{
							while(z!=0)
							{
							  a[j-z]=a[j+1];z--;
							}
							a[j]=a[j+1];
						}
						else
						a[j]=a[j+1];
						
					}
					else
					z++;
				}
			}
			
			cout<<"Case #"<<i+1<<": \n";
			for(j=0;j<r;j++)
			{
				for(l=0;l<c;l++)
				cout<<a[j][l];
				
				cout<<"\n";
			}
			
		}
		
		
		
		
	}
	
    return 0;
}


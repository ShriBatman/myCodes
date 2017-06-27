#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,t,x,y,z,q;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector< vector<int> > a;
		
		x=0;
		y=1;
		for(j=0;j<n;j++)
		{
			vector<int> b;
			for(m=0;m<n;m++)
			{
				cin>>l;
			
				if(l==0)
				x++;
				else
				y=0;
				
			
				b.push_back(l);
			}
			a.push_back(b);
		}
		
		
		if(x==0)
		cout<<n-1<<endl;
		else if(y==1)
		cout<<"0"<<endl;
		else
		{
			z=2;
			k=2;
			q=0;
			for(j=1;j<=n-1;j++)
			{
				if(x<z)
				{				
					cout<<n-j<<endl;
					q=1;
					break;
				}
				else
				{
					z=z+k+2;
					k=k+2;
				}
			}
			
			if(q==0)
			{
				cout<<"0\n";
				//cout<<q<<endl;
			}
		}
	}
	return 0;
}

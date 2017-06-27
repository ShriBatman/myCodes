#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,r,t,x,y,z,q,h;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>x>>y;
		
		k=((x+1)/2)*((y+1)/2);
		
		vector<int> a;
		m=0;
		for(j=0;j<x*y;j++)
		{
			cin>>l;
			a.push_back(l);
			
			if(l==1)
			m++;
		}
		
		if(m<k)
		cout<<"0"<<endl;
		else
		{
			for(r=0;r<y;r++)
			{
				//cout<<"//";
				h=0;
				z=0;
				q=0;
				for(j=r;j<x*y;j++)
				{
					//cout<<a[j];
					if(z==y)
					{
						//cout<<"[[";
						z=0;	
						q=0;
					}
					if(a[j]==1)
					{
						//cout<<"??";
						q++;
					}
					if(q>=((y+1)/2) && z==y-1)
					{
						//cout<<"pp";
						h++;
					}
					z++;
				}
				for(j=0;j<r;j++)
				{
					//cout<<a[j];
					if(z==y)
					{
						z=0;	
						q=0;
					}
					if(a[j]==1)
					{
						q++;
					}
					if(q>=((y+1)/2) && z==y-1)
					{
						h++;
					}
					
					z++;
				}
				
				if(h>=((x+1)/2))
				{
					h=-1;
					break;
				}
			}
			
			if(h==-1)
			cout<<"1"<<endl;
			else
			cout<<"0"<<endl;
			
		}
	}
	return 0;
}

/*
4
5 1
1 0 0 1 1
3 3
0 0 1 1 0 1 1 0 0
3 3
1 1 1 0 1 0 0 1 0
3 3
1 0 0 1 1 0 1 0 0
*/

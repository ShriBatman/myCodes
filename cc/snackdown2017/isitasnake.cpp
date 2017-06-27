//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>l;
		vector<string>a;
		string b;
		
		for(j=0;j<2;j++)
		{
			cin>>b;
			a.push_back(b);
		}
		
		k=0;
		r=0;
		m=0;
		n=0;
		vector<int> p;
		for(j=0;j<l;j++)
		{
			if(a[0][j]=='#' && a[1][j]=='#')
			p.push_back(3);
			else if(a[0][j]=='#')
			p.push_back(1);
			else if(a[1][j]=='#')
			p.push_back(2);
			else
			p.push_back(0);
		}
		
		//for(j=0;j<l;j++)
		//cout<<p[j];
		
		int f=0;
		for(j=0;j<l;j++)
		{
			if(p[j]>0 && r==2)
			{
				f=1;//cout<<"0";
				break;
			}
			else if(p[j]>0)
			r=1;
			else if(p[j]==0 && r==1)
			r=2;
			
			
			if(r==1)
			{
			if(j!=l-1)
			{
				if(p[j]==1 && p[j+1]==2)
				{
					f=1;//cout<<"1";
					break;
				}
				if(p[j]==2 && p[j+1]==1)
				{
					f=1;//cout<<"2";
					break;
				} 
			}
			if(p[j]==1)
			{
				k=1;
				if(n>0 && n%2!=0)
				{
					f=1;//cout<<"3";
					break;
				}
				else n=0;
				if(m>0 && m%2==0)
				{
					f=1;
					//cout<<"4";
					break;
				}
				else m=0;
				
			}
			else if(p[j]==2)
			{
				k=2;
				if(n>0 && n%2==0)
				{
					f=1;
					//cout<<"5";
					break;
				}
				else n=0;
				if(m>0 && m%2!=0)
				{
					f=1;
					//cout<<"6";
					break;
				}
				else m=0;
			}
			else if(p[j]==3)
			{
				if(k==1)
				{
					n++;
				}
				else if(k==2)
				{
					m++;
				}
			}
			
			}
		}
		
		if(f==1)
		cout<<"no\n";
		else
		cout<<"yes\n";
		
		
	}
	
    return 0;
}


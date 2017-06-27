#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	if(t==1918)
	{
		cout<<"26.09."<<t<<endl;
	}
	else if(t>1918)
	{
	
	    if(t%400==0) l=0;
		else
		{
			if(t%100==0) l=1;
			else if(t%4==0) l=0;
			else l=1;
		}
				
		if(l==0)
		{
			cout<<"12.09."<<t<<endl;
		}
		else
		{
			cout<<"13.09."<<t<<endl;
		}
	}
	else
	{
		if(t%4==0) l=0;
		else l=1;
		
		if(l==0)
		{
			cout<<"12.09."<<t<<endl;
		}
		else
		{
			cout<<"13.09."<<t<<endl;
		}
		
	}
	return 0;
}

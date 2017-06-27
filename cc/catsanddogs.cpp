#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,t;
	long long int c,d,l,k;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>c>>d>>l;
		
		if(l%4!=0)
		cout<<"no"<<endl;
		else if(l>(c+d)*4)
		cout<<"no"<<endl;
		else if(2*d>=c)
		{
			if(l<d*4)
			cout<<"no"<<endl;
			else
			cout<<"yes"<<endl;
		}
		else if(2*d<c)
		{
			if(l<(c-d)*4)
			cout<<"no"<<endl;
			else
			cout<<"yes"<<endl;
		}
	}
	
	
	return 0;
}

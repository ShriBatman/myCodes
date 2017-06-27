#include<bits/stdc++.h>

using namespace std;

#define PI 3.14159265

int main()
{
	int i,k,t,x,y,p;
	double r,j,l,m,n,z;
	double result;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>p>>x>>y;
		
		k=((x-50)*(x-50)) + ((y-50)*(y-50));
		
		if(k>2500)
		cout<<"Case #"<<i+1<<": white"<<endl;
		else
		{
			r=(p*360)/100;
			m=(y-50)/(x-50);
			if(p==100)
		    cout<<"Case #"<<i+1<<": black"<<endl;
			else if(x>=50 && y>=50)
			{
				result = atan(m) * 180/PI;
				result = 90 - result;
			//	cout<<result<<endl;
				if(result<=r)
				cout<<"Case #"<<i+1<<": black"<<endl;
				else
				cout<<"Case #"<<i+1<<": white"<<endl;
			}
			else if(x>=50 && y<50)
			{
				result = atan(m) * 180/PI;
				result = 90 - result;
			//	cout<<result<<endl;

				if(result<=r)
				cout<<"Case #"<<i+1<<": black"<<endl;
				else
				cout<<"Case #"<<i+1<<": white"<<endl;
			}
			else if(x<50 && y<50)
			{
				result = atan(m) * 180/PI;
				result = 180 + (90-result);
			//	cout<<result<<endl;
				if(result<=r)
				cout<<"Case #"<<i+1<<": black"<<endl;
				else
				cout<<"Case #"<<i+1<<": white"<<endl;
			}
			else if(x<50 && y>=50)
			{
				result = atan(m) * 180/PI;
				result = 360 -(90 + result);
			//	cout<<result<<endl;
				if(result<=r)
				cout<<"Case #"<<i+1<<": black"<<endl;
				else
				cout<<"Case #"<<i+1<<": white"<<endl;
			}
		}
	}
	return 0;
}

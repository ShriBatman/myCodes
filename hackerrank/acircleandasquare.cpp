#include<bits/stdc++.h>

using namespace std;
/*
bool on(int x, int y,int a,int b,int c,int d) {
    if (x == a || x == c)
        if (y < b && y > d)
            return true;

    if (y == b || y == d)
        if (x < a && x > c)
            return true;
}

bool in(int x, int y,int a,int b,int c,int d) {
    bool inX = false;
    bool inY = false;
    if (x < a && x > c)
        inX = true;

    if (y < b && y > d)
        inY = true;

    return (inX && inY);
}
*/
int main()
{
	int i,j,k,l,m,n,r,t,x,y,z,a,b,c,d;
	
	cin>>x>>y;
	
	cin>>m>>n>>r;
	
	cin>>a>>b>>c>>d;
	
	if(a==c)
	{
		k=abs(b-d);
	}
	
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			if(((j-m)*(j-m) + (i-n)*(i-n))<=r*r)
			cout<<"#";
			//else if(on(j,i,a,b,c,d))
			//cout<<"#";
			//else if(in(j,i,a,b,c,d))
			//cout<<"#";
			else
			cout<<".";
		}
		cout<<endl;
	}
	return 0;
}

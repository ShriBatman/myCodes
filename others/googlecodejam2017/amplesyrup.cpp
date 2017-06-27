//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926535897932384626

bool sortcol( const vector<double>& v1,const vector<double>& v2 )
{
	//if(v1[0]!=v2[0])
 //return v1[0] > v2[0];
 //else
 return v1[1] > v2[1];
}

bool sortrad( const vector<double>& v1,const vector<double>& v2 )
{
if(v1[2]!=v2[2])
 return v1[2] > v2[2];
 else
 return v1[1] > v2[1];
}


int main()
{
	long long int i,j,k,n,t;
	double m,l,r,x,y,z,o;
	double p=2.0000000;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		
		vector< vector<double> > a;
		for(j=0;j<n;j++)
		{
			vector< double > b;
			cin>>r>>l;
			x=pi*pow(r,p);
			y=p*pi*r*l;
			m = x+y;
			b.push_back(m);
			b.push_back(x);
			b.push_back(y);
			a.push_back(b);
		}
		
		sort(a.begin(),a.end(),sortrad);
		//z=a[0][0];
		//a.erase(a.begin()+0);
		//sort(a.begin(),a.end(),sortcol);
		o=a[0][2];z=0;
		y=a[0][1];
		for(j=0;j<k;j++)
		{
			z+=a[j][2];
			if(o>a[j][2])
			{o=a[j][2];
			x=a[j][0];}
			if(y<a[j][1])
			y=a[j][1];
		}
		sort(a.begin(),a.end(),sortcol);
		
		if(x<a[0][0])
		z=z+a[0][0]-o;
		else
		z=z+y;
		
		cout<<"Case #"<<i+1<<": ";
		cout<<setprecision(25)<<z<<"\n";
		
		
	}
    return 0;
}


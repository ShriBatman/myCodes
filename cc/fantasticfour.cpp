#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,n,q,r,x,y,z,t;
	long long int p;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>q>>p;
		vector<int> a;
		for(j=0;j<n;j++)
		{
			int l;
			cin>>l;
			a.push_back(l);
		}
		
		for(j=0;j<q;j++)
		{
			cin>>x>>y>>z;
			long long int k=1;
			if(x==1)
			{
				a[y-1]=z;
			}
			else if(x==2)
			{
				long long int e,b,c,d,f,g,h;
				for(r=y-1;r<z;r++)
				{
					k=((k%p)*(a[r]%p))%p;
				}
				f=k;
				e=sqrt(k);
				g=sqrt(f/4);
				
				for(r=e;r>=g;r--)
				{
					k=f;
					h=r;
					k=k-pow(h,2);
				    b=sqrt(k);
				    k=k-pow(b,2);
				    c=sqrt(k);
				    k=k-pow(c,2);
				    d=sqrt(k);
				   // cout<<h<<"\t"<<b<<"\t"<<c<<"\t"<<d<<endl;
				    if(pow(h,2)+pow(b,2)+pow(c,2)+pow(d,2)==f){
				    cout<<h<<"\t"<<b<<"\t"<<c<<"\t"<<d<<endl;
				    b=-1;
				    break;
					}
				}
				if(b!=-1)
				cout<<"-1"<<endl;
			}
		}
		
		
	}
	
	return 0;
}

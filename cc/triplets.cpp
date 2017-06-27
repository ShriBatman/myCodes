//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	long long int i,j,k,l,m,n,s,w,x,z,p,q,r,t,aa,cc;
	long long int f=1000000007;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>p>>q>>r;
		
		vector<long long int> a,b,c;
		for(j=0;j<p;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		
		for(j=0;j<q;j++)
		{
			cin>>l;
			b.push_back(l);
		}
		
		for(j=0;j<r;j++)
		{
			cin>>l;
			c.push_back(l);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		sort(c.begin(),c.end());
		
		s=w=aa=cc=n=0;
		for(j=0;j<q;j++)//traversing the Y vector
		{
			k=b[j];
			std::vector<long long int>::iterator up;
			up = std::upper_bound (a.begin(), a.end(), k);
			x=(long long int)(up - a.begin());
			up = std::upper_bound (c.begin(), c.end(), k);
			z=(long long int)(up - c.begin());
			
			//cout<<x<<z<<"\n";
			
			for(m=aa;m<x;m++)
			{
				s=s+a[m];
			}
			aa=x;
			
			for(m=cc;m<z;m++)
			{
				w=w+c[m];
			}
			cc=z;

			n=((n%f)+((s%f)+(k%f*aa%f)%f)%f*(w%f+(k%f*cc%f)%f)%f)%f;
			
		}
		
		cout<<n<<"\n";

		
	}
	
    return 0;
}


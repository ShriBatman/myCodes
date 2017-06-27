//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,y,z,q;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>l>>r;
		vector<int> a;
		q=0;
		for(j=0;j<10;j++)
		{
			cin>>k;
			if(k==0)
			q++;
			a.push_back(k);
		}
		
		if(q==10)
		{
			if(r<1023456789)
			cout<<"0\n";
			else
			{
				
			}
		}
		else{
		y=0;
		for(j=l;j<=r;j++)
		{
			vector<int> b(10,0);
			long long int x=j;
			
			while(x!=0)
			{
				b[x%10]++;
				x=x/10;
			}
			
			z=0;
			for(m=0;m<10;m++)
			{
				if(a[m]==b[m])
				{
					z=1;break;
				}
			}
			if(z==0)
			y++;
		}
		
		cout<<y<<"\n";
		}
	}
	
    return 0;
}


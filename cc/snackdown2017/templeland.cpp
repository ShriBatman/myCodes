//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>k;
		vector<int> a;
		for(j=0;j<k;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		
		if(k%2==0)
		cout<<"no\n";
		else
		{
			t=1;
			int flag=1;
			for(j=0;j<(k+1)/2;j++)
			{
				if(a[j]!=t)
				{
					flag=0;
					//cout<<a[j];
					break;
				}
				else
				t++;
			}
			t-=2;
			if(flag==1)
			{
				for(j=(k+1)/2;j<k;j++)
				{
					if(a[j]!=t)
					{
						flag=0;
						//cout<<a[j]<<"gg"<<t;
						break;
					}
					else
					t--;
				}
			}
			
			if(flag==0)
			cout<<"no\n";
			else
			cout<<"yes\n";
		}
	}
    return 0;
}


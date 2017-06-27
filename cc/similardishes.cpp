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
		vector<string> a;
		vector<string> b;
		string x;
		
		for(j=0;j<4;j++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		for(j=0;j<4;j++)
		{
			cin>>x;
			b.push_back(x);
		}
		
		k=0;
		for(j=0;j<4;j++)
		{
			for(m=0;m<4;m++)
			{
				if(a[j]==b[m])
				{
					k++;
					break;
				}
			}
			if(k>=2)
			{
				cout<<"similar\n";
				break;
			}
		}
		
		if(k<2)
		cout<<"dissimilar\n";
	}
    return 0;
}


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
		string a;
		cin>>a;
		int x=0;
		for(j=0;j<a.length()-1;j++)
		{
			if(a[j]=='S' && (a[j+1]=='E' || a[j+1]=='C'))
			{
				x=1;
				break;
			}
			else if(a[j]=='E' && a[j+1]=='C')
			{
				x=1;
				break;
			}
		}
		
		if(x==1)
		cout<<"no\n";
		else
		cout<<"yes\n";
	}
	
    return 0;
}


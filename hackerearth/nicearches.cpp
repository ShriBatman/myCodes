//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,top,count;
	
	cin>>m;
	
	string s;
	vector<string> x;
	for(i=0;i<m;i++)
	{
		cin>>s;
		x.push_back(s);
	}
	count=0;
	for(i=0;i<m;i++)
	{
	    string a,b;
		a = x[i].substr(0,x[i].length());
		//cout<<a<<endl;
				
		top=-1;
		for(j=0;j<a.length();j++)
		{
			top++;
			b[top]=a[j];
			if(top>0 && b[top]==b[top-1])
			{
				top=top-2;
			}
		}
		if(top==-1)
		count++;
	}
	
	cout<<count<<"\n";
    return 0;
}


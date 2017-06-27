#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,t,r,x,y,p;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>x;
		vector<int> w;
		
		for(j=0;j<x;j++)
		{
			cin>>l;
			w.push_back(l);			
		}
		
		r=*max_element(w.begin(),w.end());
		
		if(r*x<50)
		cout<<"Case #"<<i+1<<":  1"<<endl;
		else{
		sort(w.begin(),w.end());
		k=0;
		n=x;
		for(j=x-1;j>=0;j--)
		{
			if(n>0)
			{
			if(w[j]>=50)
			{
				k++;
				n--;
			}
			else if(50%w[j]==0)
			{
				if(n>=50/w[j])
				{
					k++;
					n=n-(50/w[j]);
				}
			}
			else if(50%w[j]!=0)
			{
				if(n>=(50/w[j])+1)
				{
					k++;
					n=n-(50/w[j])-1;
				}
			}
			}
		}
		cout<<"Case #"<<i+1<<": "<<k<<endl;
		}
	}
	return 0;
}

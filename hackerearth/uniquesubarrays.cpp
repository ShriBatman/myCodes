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
		cin>>n;
		vector<long long int> a;
		for(j=0;j<n;j++)
		{
			cin>>l;
			a.push_back(l);
		}
		sort(a.begin(),a.end());
		a.erase(unique(a.begin(),a.end()),a.end());
		k=a.size();
		 //cout<<k<<endl;
		r=2;
		if(k==1)      r=0;
		else if(k==2) r=2;
		else{
		for(j=0;j<k-2;j++)
		{
		//			cout<<r<<endl;;

			r=r+((j+3)*(j+2));
		}
		}
		cout<<r<<endl;
		m=(k*k*(k+1))/2 -r + (n-k);
		cout<<m<<endl;
	}
	
    return 0;
}


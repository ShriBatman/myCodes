//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n>>k;
	
	vector<long long int> x,y;
	
	for(i=0;i<n;i++){
		cin>>l;
		x.push_back(l);
	}
	for(i=0;i<n;i++){
		cin>>r;
		y.push_back(r);
	}
	
	vector<long double> d(n);
	for(i=0;i<n;i++){
		d[i]=sqrt(pow(x[i],2)+pow(y[i],2));
	}
	
	sort(d.begin(),d.end());
	t = ceil(d[k-1]);
	cout<<t<<"\n";
	
	
	
    return 0;
}


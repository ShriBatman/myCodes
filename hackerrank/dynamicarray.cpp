//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int q,i,j,k,l,m,n,r,t;
	
	cin>>n>>q;
	vector< vector<long long int> >arr(n);
	t=0;
	for(i=0;i<q;i++)
	{
		cin>>l>>m>>r;
		j=(m^t)%n;
		//how to enter an element in a 2d vector already containing elements
		if(l==1){
			vector< long long int > b(arr[j]);
			b.push_back(r);
			arr[j]=b;
		}
		else{
			t=arr[j][r%(arr[j].size())];
			cout<<t<<"\n";
		}
	}
	
	
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,power;
	
	cin>>n;
	
	vector<long long int> a;
	
	for(i=0;i<n;i++){
		cin>>l;
		a.push_back(l);
	}
	
	for(i=0;i<n;i++){
		if(a[i]<5) cout<<"0\n";
		else{
			r = a[i]/5;
			j=2;
			power = 25;
			while(a[i]>=power){
				r+= a[i]/power;
				j++;
				power = power * 5;
			}
			cout<<r<<"\n";
		}
	}
	
    return 0;
}


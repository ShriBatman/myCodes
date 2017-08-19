//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	string a;
	vector<int> b(26,0);
	
	cin>>a;
	
	for(i=0;i<a.size();i++){
		int p = a[i];
		b[p-97]++;
	}
	
	sort(b.rbegin(),b.rend());
	
//	for(i=0;i<26;i++) cout<<b[i]<<"\n";
	
	vector<int>::iterator it;
	it = find(b.begin(),b.end(),0);
	r = it-b.begin();
	
	t = *min_element(b.begin(),b.begin()+r);
//	cout<<r<<t<<"\n";
	for(i=0;i<r;i++){
		b[i]-=t;
	}
		
	
	n=0;
	for(i=0;i<r;i++){
		if(b[i]!=t){
			n=1;break;
		}
	}

	if(n==1) cout<<"NO\n";
	else cout<<"YES\n";
	
    return 0;
}


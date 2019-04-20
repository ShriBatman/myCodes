//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	cin>>n;
	vector<long long int> c;
	vector<long long int> b(10,0);
	//c=b;
	
	string a,s;
	cin>>a;
	cin>>s;
	
	//cout<<'9'-'0';
	for(i=0;i<n;i++){
		b[s[i]-'0']++;
	}
	c=b;
	
	k=0;r=0;
	for(i=0;i<n;i++){
		t=0;
		for(j=a[i]-'0';j<10;j++){
			if(b[j]>0){
				t=1;b[j]--;break;
			}
		}
		if(t==0){
			k++;
			for(j=0;j<a[i]-'0';j++){
				if(b[j]) {
				b[j]--;break;
				}
			}
		}
		
		t=0;
		for(j=a[i]-'0' +1;j<10;j++){
			if(c[j]) {
				r++,t=1,c[j]--;break;
			}
		}
		if(t==0){
			//k++;
			for(j=0;j<=a[i]-'0';j++){
				if(c[j]){
					c[j]--;break;
				}
			}
		}
	}
	
	cout<<k<<"\n"<<r<<"\n";
    return 0;
}


//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);

/*basic concept:
if sum of array is divisible by 3 then only it can be divided into three groups.
we calculate for every i if ith to nth is equal to sum/3 in c[]
in s[] for every i we calculate sum of c[i] to c[n] 
traversing the array for sum/3
if at ith element sum/3 is found we add the vale of s[i+2] in final answer
i+2 beacuse we want to divide in 3 groups......think... 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	cin>>n;
	vector<long long int> a,c,s(n);
	m=0;
	for(i=0;i<n;i++){
		cin>>l;
		m+=l;
		a.push_back(l);
	}
	
	if(m%3!=0){
		cout<<"0\n";
	}
	else{
		k=m/3;
		for(i=0;i<n;i++){
			if(i>0) m-=a[i-1];
			if(m==k) c.push_back(1);
			else c.push_back(0);
		}
		
		s[n-1] = c[n-1];
		for(i=n-2;i>=0;i--){
			s[i] = s[i+1]+c[i];
		}
		
		t=0;
		r=0;
		for(i=0;i<n-2;i++){
			t+=a[i];
			if(t==k){
				r+=s[i+2];
			}
		}
		cout<<r<<"\n";
	}
	
    return 0;
}


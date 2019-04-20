//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	vector<int> boy,girl;
	
	for(i=0;i<n;i++){
		cin>>l;
		boy.push_back(l);
	}
	cin>>m;
	for(i=0;i<m;i++){
		cin>>l;
		girl.push_back(l);
	}
	sort(boy.begin(),boy.end());
	sort(girl.begin(),girl.end());
	i=0;j=0;k=0;
	while(i<n && j<m){
		if(abs(boy[i]-girl[j])<=1){
			i++;j++;k++;
		}
		else if(boy[i]<girl[j]){
			i++;
		}
		else{
			j++;
		}
	}
	
	cout<<k<<"\n";
	
    return 0;
}


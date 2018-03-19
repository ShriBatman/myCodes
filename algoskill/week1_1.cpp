//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);241365432516
#include<bits/stdc++.h>
using namespace std;

long long int quick(vector<long long int> &nuts, vector<long long int> &bolts, long long int low,long long int high){
	long long int l,r,temp,p,i,j,k;
	
	if(low < high){
		p = bolts[high];
		i = low;j=high;
		r=0;l=0;
		cout<<p<<"    ";
		while(i<j){
			if(nuts[i]>=p){
				l=1;
			}
			else i++;
			
			if(nuts[j]<=p){
				r=1;
			}
			else j--;
			
			if(r==l){
				if(nuts[i]==p) k=j;
				else if(nuts[j]==p) k=i;
					temp = nuts[i];
					nuts[i] = nuts[j];
					nuts[j] = temp;
					r=0;l=0;
					j--;i++;
			}
		}
		//i++;
		
		
		temp=bolts[k];
		bolts[k] = bolts[high];
		bolts[high] = temp;
	}
		for(j=0;j<nuts.size();j++){
		cout<<nuts[j]<<" ";
	}
	for(j=0;j<bolts.size();j++){
		cout<<bolts[j]<<" ";
	}
	cout<<"\n";
	
	return k;
}

void partition(vector<long long int> &nuts, vector<long long int> &bolts, long long int low, long long int high){
	
	if(low < high){
		long long int q = quick(nuts,bolts,low,high);
		partition(nuts,bolts,low,q-1);
		partition(nuts,bolts,q+1,high);
	}
	
}

int main(){
	
	long long int i,j,k,l,m,n,r,t;
	cin>>n;
	
	vector<long long int> nuts,bolts;
	
	for(i=0;i<n;i++){
		cin>>l;
		nuts.push_back(l);
	}
	for(i=0;i<n;i++){
		cin>>l;
		bolts.push_back(l);
	}
	partition(nuts,bolts,0,n-1);
	
	for(i=0;i<n;i++){
		cout<<nuts[i]<<" ";
	}
	for(i=0;i<n;i++){
		cout<<bolts[i]<<" ";
	}
	
    return 0;
}


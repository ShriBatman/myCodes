//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

void kadane(vector<long long int> &a,long long int x, vector<long long int> &b){
	long long int i,j,mfar,max;
	mfar=0;
	max=0;
	
	for(j=0;j<x;j++){
	
	for(i=0;i<a.size();i++){
		
		mfar +=  a[i];
		if(mfar<0) mfar = 0;
		else if(max<mfar) max = mfar;
	}
	b.push_back(max);
	}
}

void max(vector<long long int> &b, long long int &val,long long int &index){
	
	val = b[0];
	index=0;
	for(long long int i=1;i<b.size();i++){
		if(b[i]>=val){
			val = b[i];
			index=i;
		}
	}
}

int main()
{
	long long int i,j,k,l,m,n,sum,r,t,val,index;

	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n>>k;
		
		vector<long long int> a;
		int f=0;
		for(j=0;j<n;j++){
			cin>>l;
			if(l<0) f++;
			a.push_back(l);
		}
		
		if(f==0){
			sum=0;
			for(j=0;j<n;j++){
				sum+=a[j];
			}
			
			cout<<sum*k<<"\n";
		}
		else if(f==a.size()){
			cout<<*max_element(a.begin(),a.end())<<"\n";
		}
		else{
			vector<long long int> b;
			if(k<5){
				kadane(a,k,b);
				cout<<*max_element(b.begin(),b.end())<<"\n";
			}
			else{
				kadane(a,5,b);
				max(b,val,index);
				if(index==4){
					
					r=b[4]-b[3];
					cout<<b[2]+((k-2)-1)*r<<"\n";
					
				}
				else{
					cout<<val<<"\n";
				}
			}
			
		}
	}
	
    return 0;
}

//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int b[10000009];
void preprocess(){
	
	for(long int i=0;i<10000000;i++){
		b[i]=0;
	}
	long long int x=2,y=7;
	long long int r=x+y;
	b[2]=1;
	b[7]=1;
	while(r<10000000){
		b[r]=1;
		x=y;
		y=r;
		r=x+y;
	}
}

int main()
{
	long long int i,j,k,l,m,n,r,t,x,y;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		
		preprocess();
		cin>>n>>m;
		
		vector<long long int> a;
		
		
		for(j=0;j<n;j++){
			cin>>l;
			a.push_back(l);
		}
		
		for(j=0;j<m;j++){
			cin>>l;
			if(l>=0) b[l]=0;
		}
		
		//for(j=0;j<10000009;j++) cout<<b[j]<<" ";
		
		k=0;
		if(n == 1) cout<<"1\n";
		else{
			
		if(b[a[1]] == 0) k++;
		if(b[a[n-2]] == 0) k++;
		
		for(j=1;j<n-1;j++){
			if((a[j-1]<0?1:b[a[j-1]]==0) && (a[j+1]<0?1:b[a[j+1]]==0)) k++;
		}
		
		cout<<k<<"\n";
		}
	}
	
	
	
    return 0;
}


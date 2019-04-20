//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t,q;
	
	cin>>n>>m;
	vector<int> cl,park(n+1,0);//catleaf
	cl.push_back(0);
	
	for(i=0;i<n;i++){
		cin>>l;
		cl.push_back(l+2);
	}
	//q = cl[1];
	
	for(i=0;i<n-1;i++){
		cin>>l>>r;
		if(l>r){
			int y=l;
			l=r;
			r=y;
		}
		if(cl[l]>1) cl[l]-=2;
		park[r]=l;
	}
	
	r=0;
	for(i=1;i<=n;i++){
		if(cl[i]>=2){
			t=0;
			for(j=i;j!=1;j=park[j]){
				if(cl[j]==1 || cl[j] == 3) t++;
				else t=0;
				if(t>m) break;
			}
			
			if(j==1){
				if(cl[1]==3||cl[1]==1) t++;
				else t=0;
				if(t<=m) r++;
			}
		}
	}
	
	cout<<r<<"\n";
	
	//for(i=0;i<n+1;i++) cout<<cl[i];
	//for(i=0;i<n+1;i++) cout<<park[i]; 
	
	
	
    return 0;
}


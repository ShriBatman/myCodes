//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t,f,two,thr;
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		
		vector< vector<long long int> > a;
		
		for(j=0;j<n;j++){
			vector<long long int> b;
			for(m=0;m<n;m++){
				cin>>l;
				b.push_back(l);
			}
			a.push_back(b);
		}
		
		vector<long long int> c(n,0);
		

	int p=0;
		int x=0;
		
		if(n<=3){
			for(j=0;j<n;j++) cout<<j+1<<" ";
			cout<<"\n";
		}
		else if(n<=10){
		for(j=0;j<n;j++){
			thr=-1;two=-1;
			f=-1;	
			for(m=0;m<n;m++){
				if(a[j][m]==2){
					two++;
					f=m;
				}
				if(a[j][m]==3) thr=m;
			}
			
			if(thr!=-1){
				c[j]=4;c[thr]=8;
			}
			else if(thr==-1 && two==-1){
				
				if(n<=5){
					if(x==0){
						c[j]=1;
					}
					else if(x==1)c[j]=3;
					else c[j]=5;
					
					x++;
				}
				else if(n<=9){
					if(x==0) c[j]=1;
					else if(x==1) c[j]=5;
					else c[j]=7;
					x++;
				}
				else if(n==10){
					if(x==0) c[j]=1;
					else c[j]=7;
					x++;
				}
			}
			else if(two!=-1){
				if(n<=5){
					if(p==0) c[j]=2;
					else if(p==1) c[j]=4;
					//else c[j]=6;
					p++;
				}
				else if(n<=8){
					if(two==0){
						c[j]=3;
						c[f]=6;
					}
					else c[j]=2;
				}
				else if(n==9){
					if(two==1){
						if(p==0) c[j]=3;
						else c[j]=9;
						p++;
					}
					else if(two==4) c[j]=6;
					else c[j]=2;
				}
				else if(n==10){
					if(two==1){
						if(p==0) c[j]=3;
						else c[j]=9;
						p++;
					}
					else if(two==0){
						c[j]=5;
						c[f]=10;
					}
					else if(two==5) c[j]=6;
					else c[j]=2;
				}
			}
		}
		
		for(m=0;m<n;m++) cout<<c[m]<<" ";
		cout<<"\n";
		}
		else{
			cout<<t<<"\n";
		}
	}
	
    return 0;
}

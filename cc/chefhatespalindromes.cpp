//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n>>m;
		
		if(m>2){
			cout<<"1 ";
			
			for(j=0;j<n;j++){
				char p = 97;
				char q;
				
				q = j%m;
				p=p+q;
				cout<<p;
			}
			cout<<"\n";
		}
		else if(m==1){
			cout<<n<<" ";
			for(j=0;j<n;j++){
				cout<<"a";
			}
			cout<<"\n";
		}
		else{
			//string w = "aaababb";
			if(n%2==0){
				if(n<=6){
				cout<<n/2<<" ";
				for(j=0;j<n/2;j++) cout<<"a";
				for(j=0;j<n/2;j++) cout<<"b";
				cout<<"\n";
				}
				else if(n>8){
					cout<<"4 ";
					k=0;
					while(n>0){
						if(k==0 || k==3 || k==4){
							cout<<"a";
						}
						else if(k==1 || k==2 || k==5){
							cout<<"b";
						}
						n--;
						k++;
						if(k==6) k=0;
					}
					cout<<"\n";
				}
				else{
					cout<<(n/2)-1<<" ";
					for(j=0;j<(n/2)-1;j++) cout<<"a";
					cout<<"ba";
					for(j=0;j<(n/2)-1;j++) cout<<"b";
					cout<<"\n";
				}
			}
			else{
				if(n<=5){
				cout<<(n+1)/2<<" ";
				for(j=0;j<(n+1)/2;j++) cout<<"a";
				for(j=0;j<(n-1)/2;j++) cout<<"b";
				cout<<"\n";
				}
				else if(n>7){
					cout<<"4 ";
					k=0;
					while(n>0){
						if(k==0 || k==3 || k==4){
							cout<<"a";
						}
						else if(k==1 || k==2 || k==5){
							cout<<"b";
						}
						n--;
						k++;
						if(k==6) k=0;
					}
					cout<<"\n";
				}
				else{
					cout<<(n-1)/2<<" ";
					for(j=0;j<(n-1)/2;j++) cout<<"a";
					cout<<"ba";
					for(j=0;j<(n-3)/2;j++) cout<<"b";
					cout<<"\n";
				}
			}
		}
	}
	
    return 0;
}


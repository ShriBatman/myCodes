//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>k;
		vector<long long int> a;
		r=0;
		for(j=0;j<k;j++){
			cin>>m;
			if(m>7 || m<1) r=1;
			a.push_back(m);
		}
		
		if(r==1) cout<<"no\n";
		else{
			
			t=k-1;
			l=1;
			for(j=0;j<k/2;j++){
				if(a[j]==a[t]){
					if(a[j]==l+1) l++;
					else if(a[j]!=l){
						r=1;
						break;
					}
					t--;
				}
				else{
					r=1;
					break;
				} 
				
			}
			
			if(r==1 || l<=5) cout<<"no\n";
			else{
				if(k%2==0){
					if(l==7) cout<<"yes\n";
					else cout<<"no\n";
				}
				else if(l<=5) cout<<"no\n";
				else if((l==6 && a[k/2]==l+1) || (l==7 && a[k/2]==l)) cout<<"yes\n";
				else cout<<"no\n";
			}
			
		}
	}
    return 0;
}


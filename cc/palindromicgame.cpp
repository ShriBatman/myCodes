//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,o;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		string a,b;
		
		cin>>a>>b;
		string s(a),z(b);
		sort(s.begin(),s.end());
		sort(z.begin(),z.end());
		
		vector<int> p(26,0);
		vector<int> q(26,0);
		
		for(j=0;j<s.size();j++){
				r=s[j];m=z[j];
				p[r-97]++;
				q[m-97]++;
		}
		
		k=0;
		for(j=0;j<26;j++){
			if(p[j]>0){
				if(!(q[j]>0)){
					k=1;break;
				}
			}
			else if(p[j]==0){
				if(q[j]!=0){
					k=1;break;
				}
			}
		}
		
		if(k==1){
			o=0;
			//A string has two same elements that B do not have 
			for(j=0;j<26;j++){
				if(p[j]>1){
					if(q[j]==0){
						o=1;
						cout<<"A\n";
						break;
					}
				}
			}
			
			r=0;
			if(o==0){
				//check if A has an uncommon element
				//if it do not then B wins
				for(j=0;j<26;j++){
				if(p[j]>0){
					if(!(q[j]>0)){
						r=1;break;
					}
				}
				}
				if(r==0){
					cout<<"B\n";
					o=1;
				}
			}
			
			r=0;
			if(o==0){
				//check if B has an uncommon element
				//if it do not then A wins
				for(j=0;j<26;j++){
					if(q[j]>0){
						if(!(p[j]>0)){
							r=1;break;
						}
					}
				}
				if(r==0){
					cout<<"A\n";
					o=1;
				}
			}
			//any other case B wins
			if(o==0){
				cout<<"B\n";	
			}
			
			
		} 
		else cout<<"B\n";
		
	}
	
    return 0;
}


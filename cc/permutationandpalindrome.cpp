//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		string s;
		cin>>s;
		
		vector<long long int> a(26,0);
		
		for(j=0;j<s.size();j++){
			a[s[j]-97]++;
		}
		
		k=0;
		r=0;
		for(j=0;j<a.size();j++){
			if(a[j]%2!=0) k++;
			if(a[j]>0) r++;
		}
		
		if(k>1) cout<<"-1\n";
		else if(r==1){
			for(j=0;j<s.size();j++) cout<<j+1<<" ";
			
			cout<<"\n";
		}
		else{
			multimap<char,long long int> p;
			
			for(j=0;j<s.size();j++){
				p.insert(pair<char,long long int>(s[j],j));
			}
			
		//	multimap<char,long long int>::iterator it;
			//for(it=p.begin();it!=p.end();it++){
			//	cout<<it->first;
			//	cout<<it->second;
			//}
			
			
			if(k==0){
				for(j=0;j<a.size();j++){
					if(a[j]>0){
						char c = j+97;
						multimap<char,long long int>::iterator it = p.find(c);
						for(m=1;m<=a[j]/2;m++){
							cout<<it->second + 1 <<" ";
							it++;
						}
					}
				}
				
				
				for(j=a.size()-1;j>=0;j--){
					if(a[j]>0){
						char c = j+97;
						multimap<char,long long int>::iterator it = p.find(c);
						advance(it,a[j]/2);
						for(m=1;m<=a[j]/2;m++){
							cout<<it->second + 1<<" ";
							it++;
						}
					}
				}
				
				cout<<"\n";
			}
			else{
				
				for(j=0;j<a.size();j++){
					if(a[j]>0 && a[j]%2==0){
						char c = j+97;
						multimap<char,long long int>::iterator it = p.find(c);
						for(m=1;m<=a[j]/2;m++){
							cout<<it->second + 1 <<" ";
							it++;
						}
					}
					else if(a[j]%2!=0) r = j;
				}
				
				char x = r+97;
				multimap<char,long long int>::iterator it = p.find(x);
				for(m=0;m<a[r];m++){
					cout<<it->second + 1<<" ";
					it++;
				}
				
				
				for(j=a.size()-1;j>=0;j--){
					if(a[j]>0 && a[j]%2==0){
						char c = j+97;
						multimap<char,long long int>::iterator it = p.find(c);
						advance(it,a[j]/2);
						for(m=1;m<=a[j]/2;m++){
							cout<<it->second + 1<<" ";
							it++;
						}
					}
				}
				
				cout<<"\n";
				
			}
		}
	}
	
    return 0;
}


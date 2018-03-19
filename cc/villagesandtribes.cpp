//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		string s;
		cin>>s;
		
		r=0;//flag
		k=0;//count of a
		n=0;//count of b
		l=0;//temp count
		for(j=0;j<s.size();j++){
			if(s[j]=='A'){
				k++;
				if(r==1){
					k=k+l;
				}
				r=1;
				l=0;
			}
			else if(s[j]=='B'){
				n++;
				if(r==2){
					n=n+l;
				}
				r=2;
				l=0;
			}
			else{
				if(r==1 || r==2)l++;
			}
		}
		
		cout<<k<<" "<<n<<"\n";
	}
	
    return 0;
}


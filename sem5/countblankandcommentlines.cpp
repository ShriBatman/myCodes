//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{	
	long long int i,j,k,l,m,n,r,t;
	
	ifstream fp("mergesort.c");
	
	string s;
		
	int comment=0,blank=0,data=0,total=0,commentflag=0;
	
	while(fp.eof()==0){
		getline(fp,s,'\n');
		
		if (s=="" || s=="	"){
			blank++;
			if(commentflag) comment++;
		}
		else if(commentflag==0){
			if((s[1]=='/' && s[2]=='/') || (s[0]=='/' && s[1]=='/'))comment++;
			else if((s[1]=='/' && s[2]=='*') || (s[0]=='/' && s[1]=='*')){
				comment++;
				commentflag=1;
			}
			else data++;
		}
		else if(commentflag){
			if(s[s.size()-2]=='*' && s[s.size()-1]=='/'){
				commentflag=0;
			}
			comment++;
		}
		total++;
		cout<<blank<<s<<"\n";
	}
	
	cout<<total<<"\n"<<blank<<"\n"<<comment<<"\n"<<data;
	
    return 0;
}


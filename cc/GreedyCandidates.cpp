//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int max,i,j,k,l,m,n,r,t,p,x,y,z;
	string str,s;
	char ch = '0';
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n>>m;
		
		vector<long long int> min_sal;
		
		for(j=0;j<n;j++){
			cin>>l;
			min_sal.push_back(l);
		}
		
		vector<long long int> off_sal,max_jobs;
		for(j=0;j<m;j++){
			cin>>l>>p;
			off_sal.push_back(l);
			max_jobs.push_back(p);
		}
		
		vector<string> qual;
		
		for(j=0;j<n;j++){
			cin>>s;
			qual.push_back(s);
		}
		
		x=0;
		for(j=0;j<n;j++){
			max=0;
			y=m;
			string a(m,ch);
			for(k=0;k<m;k++){
				if(qual[j][k]=='1' && max_jobs[k]>0 && off_sal[k]>=min_sal[j] && off_sal[k]>max){
					max=off_sal[k];
					y=k;					
				}
			}
			
			if(y!=m){
				max_jobs[y]=max_jobs[y]-1;
				a[y]='1';
				x=x+max;
			}
			qual[j]=a;
		}
		
		z=0;
		vector<int> c(m,0);
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
				if(qual[j][k]=='1'){
					z++;
					c[k]=1;
				}
			}
		}
		
		r=0;
		for(j=0;j<m;j++){
			if(c[j]==0) r++;
		}
		
		cout<<z<<" ";
		cout<<x<<" ";
		cout<<r<<"\n";
	}
	
    return 0;
}


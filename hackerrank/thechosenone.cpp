#include<bits/stdc++.h>

using namespace std;


unsigned long long gcd(unsigned long long x, unsigned long long y){
    unsigned long long wk;
    if(x<y){ wk=x;x=y;y=wk; }
    while(y){
        wk = x%y;
        x=y;
        y=wk;
    }
    return x;
}

long long int gcd_a(int n,vector<long long int> a){
    if(n==1) return a[0];
    if(n==2) return gcd(a[0], a[1]);
    int h = n / 2;
      std::vector<long long int>::iterator it=a.cbegin();
      std::vector<long long int>::iterator itt=a.cbegin()+h;
    return gcd(gcd_a(h, it), gcd_a(n - h, itt));
}

int main()
{
	int i,j,k,l,m,n,t,r;
	cin>>n;
	vector <long long int> A;
	
	for(i=0;i<n;i++){
	cin>>m;
	A.push_back(m);
	}
	
	    
    for(i=0;i<n;i++)
    {
    	k=A[0];
    	A.erase(A.begin());
		
		long long int gcd = gcd_a(A.size(), A);
		if(gcd!=1)
		{
				cout<<gcd<<endl;
				break;
		}
		else
		A.push_back(k);
		
		
	}
	    
    return 0;
}

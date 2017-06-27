#include <bits/stdc++.h>

using namespace std;


int main(){
    long long int i,j,k,l,n,t;
    long double a,b,c,m,x,y,z;
    cin >> t;
    for(i = 0;i < t;i++){
        cin >> n;
        
        if(n<=3)
            cout<<"0"<<endl;
        else if(n<=5)
            cout<<"3"<<endl;
        else{
        
        z=(n-1)%3;
        x=n-1-z;
        z=(n-1)%5;
        y=(n-1)-z;
        z=(n-1)%15;
        m=n-1-z;
        a=x/6;
        b=y/10;
        c=m/30;
        k=((a*(3+x)) + (b*(5+y)) - (c*(15+m)));
           cout<<k<<endl;
        }
        
        
        
    }
    return 0;
}


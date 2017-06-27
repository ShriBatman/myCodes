//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
long long int c=0;
bool V[30];

void subsets(int i,vector<long long int>A,int n,long long int x,long long int k)
{
  if (i == n)
  {
    for (int j = 0; j < n; j++)
      if (V[j])
        {
        	
			k=k*A[j];
		}
		
		if(k<=x) c++;	
		
  } 
  else
  {
    V[i] = true;
    subsets(i + 1,A,n,x,k);
    V[i] = false;
    subsets(i + 1,A,n,x,k);
  }
}

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	vector<long long int> a;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
	}
	
	subsets(0,a,n,k,1);
	if(c==0) cout<<c<<"\n";
	else cout<<c-1<<"\n";
    return 0;
}

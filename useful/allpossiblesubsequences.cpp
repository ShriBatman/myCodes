//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

bool V[30];

void subsets(int i,vector<long long int>A,int n)
{
  if (i == n)
  {
    for (int j = 0; j < n; j++)
      if (V[j])
        {
			cout<<A[j];
		}
		
		cout<<"\n";	
  } 
  else
  {
  
    V[i] = true;
    subsets(i + 1,A,n);
    V[i] = false;
    subsets(i + 1,A,n);
  }
}

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	vector<long long int> a;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
	}
	
	subsets(0,a,n);
    return 0;
}


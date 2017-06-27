#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		long long int n;
		cin >> n;
		vector<int> a;

		
		for(long long int j=0;j<n;j++)
		{
			int x; cin >> x;
			a.push_back(x);
		}
		
		long long int x=*min_element(a.begin(),a.end());
		long long int y = x*(n-1);
		cout << y << endl;
		
	}
	return 0;
}

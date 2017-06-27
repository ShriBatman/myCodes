#include<bits/stdc++.h>

using namespace std;

struct compare {
    bool operator()(const string& first, const string& second) {
         if(first.size() != second.size())
         {
         	return first.size() < second.size() ;
		 }
		 else
		 {
		 	for(int i=0;i<first.length();i++)
		 	{
		 		if(first[i] != second[i])
		 		return first[i] < second[i] ;
			 }
		 }
		 
    }
};

int main()
{
	int i,j,k,l,m,n,r,t;
	string x;
	compare c;
	
	cin>>n;
	vector<string> a;
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	
	sort(a.begin(),a.end(),c);
	
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	
	return 0;
}

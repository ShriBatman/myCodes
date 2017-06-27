#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,r,t;
	
	string s;
	
	cin>>s;
	
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='?')
		{
		if(s[i+1]=='a' || s[i-1]=='a')
		s[i]='b';
		else
		s[i]='a';
		}
	}
	
	cout<<s<<endl;
	
	return 0;
}

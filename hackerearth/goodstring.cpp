#include<bits/stdc++.h>

using namespace std;

int main()
{
	int ij,kk;
	string str;
	int aw[25];
	std::fill_n(aw, 26, 0);
	//for(ij=0;ij<26;ij++)
	//{
	//	cout<<aw[ij];
	//}

	cin>>str;
	
		
	for(ij=0;ij<str.length();ij++)
	{
		if(str[ij]=='a')
		aw[0]++;
		else if(str[ij]=='b')
		aw[1]++;
		else if(str[ij]=='c')
		aw[2]++;
		else if(str[ij]=='d')
		aw[3]++;
		else if(str[ij]=='e')
		aw[4]++;
		else if(str[ij]=='f')
		aw[5]++;
		else if(str[ij]=='g')
		aw[6]++;
		else if(str[ij]=='h')
		aw[7]++;
		else if(str[ij]=='i')
		aw[8]++;
		else if(str[ij]=='j')
		aw[9]++;
		else if(str[ij]=='k')
		aw[10]++;
		else if(str[ij]=='l')
		aw[11]++;
		else if(str[ij]=='m')
		aw[12]++;
		else if(str[ij]=='n')
		aw[13]++;
		else if(str[ij]=='o')
		aw[14]++;
		else if(str[ij]=='p')
		aw[15]++;
		else if(str[ij]=='q')
		aw[16]++;
		else if(str[ij]=='r')
		aw[17]++;
		else if(str[ij]=='s')
		aw[18]++;
		else if(str[ij]=='t')
		aw[19]++;
		else if(str[ij]=='u')
		aw[20]++;
		else if(str[ij]=='v')
		aw[21]++;
		else if(str[ij]=='w')
		aw[22]++;
		else if(str[ij]=='x')
		aw[23]++;
		else if(str[ij]=='y')
		aw[24]++;
		else if(str[ij]=='z')
		aw[25]++;
	}
	
	kk=0;
	
	for(ij=0;ij<26;ij++)
	{
		if(aw[ij]>1){
		kk=kk+aw[ij]-1;
		}
	}
	
	cout<<kk<<endl;
	
	
	
	return 0;
}

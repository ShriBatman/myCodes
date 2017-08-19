//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	string key,message;
	getline(cin,key);
	getline(cin,message);
	
	key.append("abcdefghiklmnopqrstuvwxyz");
	
	for(i=0;i<key.size();i++){
		
		if(key[i]<65 || (key[i]<97 && key[i]>90) || key[i]>122 || key[i]==74 || key[i]==106){
			key.erase(key.begin()+i);
			i--;
		}
		else{
			for(j=i+1;j<key.size();j++){
				if(key[i]==key[j]){
					key.erase(key.begin()+j);
					j--;
				}
			}
		}
	}
	
	char str[5][5];
	r=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			str[i][j] = key[r];
			r++;
		}
	}
	
	
	m=2;
	for(i=0;i<message.size();i++){
		
		if(message[i]<65 || (message[i]<97 && message[i]>90) || message[i]>122){
			message.erase(message.begin()+i);
			i--;
		}
		
		if(message[i]==74 || message[i]==106) message[i]='i';
		
		if(message[i]==message[i+1]){
			message[i+1]='x';
		}
		
	}
	
	if(message.size()%2!=0) message.append("x");
	
	for(i=0;i<message.size();i++){
		if(m==i) {
		message.insert(i," ");
		m+=3;}
	}
	
	string encrypt(message);
	int a,b,c,d,x,y;
	for(i=0;i<message.size();i=i+3){
		for(j=0;j<key.size();j++){
			if(message[i]==key[j]) a=j;
			if(message[i+1]==key[j]) b=j;
		}
		c=a/5;d=b/5;
		x=a%5;y=b%5;
		
		if(c==d){
			if(x==4) x=-1;
			if(y==4) y=-1;
			
			encrypt[i]=str[c][x+1];
			encrypt[i+1]=str[c][y+1];
		}
		else if(x==y){
			if(c==4) c=-1;
			if(d==4) d=-1;
			
			encrypt[i]=str[c+1][x];
			encrypt[i+1]=str[d+1][y];
		}
		else{
			encrypt[i]=str[d][x];
			encrypt[i+1]=str[c][y];
		}
		
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++) cout<<str[i][j];
	}
	cout<<encrypt;
    return 0;
}


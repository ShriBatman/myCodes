//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,x,y,a,b,g_b,g_a;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		
		string s;
		cin>>s;
		cin>>x>>y;
		
		a=0;b=0;
		for(j=0;j<s.size();j++){
			if(s[j]=='a') a++;
			else if(s[j]=='b') b++;
		}
		
		if(a==b){//if number of apples and bananas are equal we can alternate between them
			string p;
			for(j=0;j<a;j++){
				p.append("ab");
			}
			cout<<p<<"\n";
		}
		else{
			if(a==0){//if no apples present add kiwi after every group of banana
				j=y;
				k=s.size();
				while(j<k){
					s.insert((string::size_type)j,1,'*');
					j=j+y+1;
					k++;
				}
				cout<<s<<"\n";
			}
			else if(b==0){//if no bananas prsent add kiwi after every group of apple
				j=x;
				k=s.size();
				while(j<k){
					s.insert((string::size_type)j,1,'*');
					j=j+x+1;
					k++;
				}
				cout<<s<<"\n";
			}
			else{
				string p;
				//min groups of a & b
				a%x==0?g_a=a/x:g_a=a/x + 1;
				b%y==0?g_b=b/y:g_b=b/y + 1;
				
				
				if(g_a==g_b){//if number of groups are equal we can alernate between them
					string app(x,'a');
					string ban(y,'b');
					for(j=0;j<g_b-1;j++){//add groups if apples and banana
						p.append(app);
						p.append(ban);
					}
					//add remainders
					p.append(a-(g_a-1)*x,'a');
					p.append(b-(g_b-1)*y,'b');					
				}
				else{
					if(g_a>g_b){
						string app(x,'a');
						if(b>=g_a){
							string ban(b/(g_a-1),'b');
							for(j=0;j<g_a-1;j++){
								p.append(app);
								p.append(ban);
							}
							p.append(a-(g_a-1)*x,'a');
							
							if(b%(g_a-1)<=y) p.append(b%(g_a-1),'b');
							else{
								int q = b%(g_a-1);
								p.append(y,'b');//add a group at the back
								q=q-y;
								if(q>y){//add a group at front
									p.insert(0,y,'b');
									q=q-y;
								}
								else {
									p.insert(0,q,'b');
									q=0;
								}
								
								if(q){
									int l_b = y - b/(g_a-1);
									for(j=x+y;j<(x+y)*(g_a-1);j=j+y+x){
										if(q>l_b){
											p.insert(j,l_b,'b');
											q=q-l_b;
										}
										else{
											p.insert(j,q,'b');
											break;
										}
									}
								}
							} 
						}
						else{
							for(j=0;j<g_a-1;j++){
								p.append(app);
								if(b){
									p.append("b");
									b--;
								}
								else{
									p.append("*");
								}
							}
							p.append(a-(g_a-1)*x,'a');
						}
					}
					else{
						string ban(y,'b');
						if(a>=g_b){
							string app(a/(g_b-1),'a');
							for(j=0;j<g_b-1;j++){
								p.append(ban);
								p.append(app);
							}
							p.append(b-(g_b-1)*y,'b');

							if(a%(g_b-1)<=x) p.append(a%(g_b-1),'a');
							else{
								int q = a%(g_b-1);
								p.append(x,'a');//add a group at the back
								q=q-x;
								if(q>x){//add a group at front
									p.insert(0,x,'a');
									q=q-x;
								}
								else {
									p.insert(0,q,'a');
									q=0;
								}
								
								if(q){
									int l_a = x - a/(g_b-1);
									for(j=x+y;j<(x+y)*(g_b-1);j=j+y+x){
										if(q>l_a){
											p.insert(j,l_a,'a');
											q=q-l_a;
										}
										else{
											p.insert(j,q,'a');
											break;
										}
									}
								}
							}
							}
						else{
							for(j=0;j<g_b-1;j++){
								p.append(ban);
								if(a){
									p.append("a");
									a--;
								}
								else{
									p.append("*");
								}
							}
							p.append(b-(g_b-1)*y,'b');
						}
					}
					
					}
					cout<<p<<"\n";
				}
		}
	}	
    return 0;
}


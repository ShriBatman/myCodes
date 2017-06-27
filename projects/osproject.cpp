//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
#include<stdlib.h>
#include <windows.h>
#include<string.h>

using namespace std;

struct Present
{
    string pname;
    long long int pcontact;
    int p_priority;
    int ptime;
};
struct Wait
{
    string wname;
    long long int wcontact;
    int arrival;
    int w_priority;
    int wtime;
};

void addcolors(unsigned short x) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,x);
}

int main()
{
   int n,count=0,total=0,time=0,check,waiting;
   
   addcolors(12);
   cout<<"---------------------------------------------------THE CLINIC-----------------------------------------------------------\n";
   
   addcolors(10);
   
   cout<<"PLEASE ENTER THE NUMBER OF DOCTORS PRESENT\n";
   cin>>n;
   
   int Doc[n+1],Print[n+1];
   
   for(int i=0;i<=n;i++)
   {
   Doc[i]=0;
   Print[i]=0;
   }
   
   addcolors(10);
   cout<<"PLEASE ENTER THE NUMBER OF PATIENTS ALREADY BEING CHECKED\n";
   cin>>check;
   
   struct Present p[check];
   addcolors(9);
   cout<<"PLEASE ENTER THE DETAILS OF PATIENTS ALREADY BEING CHECKED\n";
   
   for(int i=0;i<check;i++)
   {
      addcolors(15);
      cout<<"PLEASE ENTER THE NAME OF "<<i+1<<" PATIENTS\n";
	  cin>>p[i].pname;
 
	  cout<<"PLEASE ENTER THE MOBILE NUMBER OF "<<i+1<<" PATIENTS\n";
	  cin>>p[i].pcontact;

	  cout<<"PLEASE ENTER THE CURE TIME OF "<<i+1<<" PATIENT\n";
	  cin>>p[i].ptime;

	  cout<<"PLEASE ENTER THE PRIORITY OF "<<i+1<<" PATIENT\n";
	  cin>>p[i].p_priority;
	  
	  cout<<"PLEASE ENTER THE ID OF DOCTOR TO WHICH PATIENT IS APPOINTED\n";
	  int q;
	  cin>>q;
	  
	  Doc[q]=2;
	  Print[q]=i;
    }
    
	addcolors(10);
	cout<<"PLEASE ENTER NUMBER OF PATIENT WAITING\n";
    cin>>waiting;
    struct Wait w[waiting];
    
	addcolors(9);
	cout<<"PLEASE ENTER THE DETAILS OF PATIENT WAITING\n";
	
    for(int i=0;i<waiting;i++)
    {
	    addcolors(15);
		cout<<"PLEASE ENTER THE NAME OF "<<i+1<<" PATIENT\n";
        cin>>w[i].wname;

		cout<<"PLEASE ENTER THE MOBILE NUMBER OF "<<i+1<<" PATIENT\n";
        cin>>w[i].wcontact;

		cout<<"PLEASE ENTER THE ARRIVIAL TIME OF "<<i+1<<" PATIENT\n";
        cin>>w[i].arrival;

		cout<<"PLEASE ENTER THE CURE TIME OF "<<i+1<<" PATIENT\n";
		cin>>w[i].wtime;
	
		cout<<"PLEASE ENTER THE PRIORITY OF "<<i+1<<" PATIENT\n";
		cin>>w[i].w_priority;
		
    }
    
    total = waiting+check;

    int temp[check],k=0,temporary=0,c=0;
    
    while(count!=total)
    {
         for(int i=0;i<waiting;i++)
        {
         if(time == w[i].arrival)
         {
             temp[k]=i;
             k++;
         }
        }

        for (int i=0;i<k;i++)
        {
        for(int j=i+1;j<k;j++)
            {
                if(w[temp[i]].w_priority < w[temp[j]].w_priority && w[temp[i]].arrival == w[temp[j]].arrival)
                {
                    temporary=temp[i];
                    temp[i]=temp[j];
                    temp[j]=temporary;
                }
            }
        }
        
        for(int i=0;i<k;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                if(w[temp[i]].w_priority == w[temp[j]].w_priority)
                {
                    if(w[temp[i]].wtime > w[temp[j]].wtime)
                    {
                        temporary = temp[j];
                        temp[j] = temp[i];
                        temp[i] = temporary;
                    }
                }
            }
        }

        for(int i=0;i<n;i++)
        {
         if(Doc[i+1]==0 && c<k)
         {
             Doc[i+1]=1;
             Print[i+1]=temp[c];
             c++;
         }
        }

        cout<<endl;
		addcolors(10);
		cout<<"CURRENT STATUS OF DOCTORS AT "<<time<<"th MINUTE\n";
		cout<<"PATIENT NAME\t\tPATIENT NUMBER\t\tDOCTOR ID\n";
		
	   for(int i=1;i<=n;i++)
	   {
            if(Doc[i]==2)
           {
              addcolors(15);
			  cout<<p[Print[i]].pname<<"\t\t"<<p[Print[i]].pcontact<<"\t\t"<<i<<"\n";
           }
           else if(Doc[i]==1)
           {
               addcolors(15);
			   cout<<w[Print[i]].wname<<"\t\t"<<w[Print[i]].wcontact<<"\t\t"<<i<<"\n";
           }
           Sleep(200);
       }

       for(int i=1;i<=n;i++)
       { 
	       if(Doc[i]==1)
           {
            if(w[Print[i]].wtime==1)
            { 
			  count++;
              Doc[i]=0;
            }
            else
            {
                w[Print[i]].wtime--;
            }
           }
           else if(Doc[i]==2)
           {
             if(p[Print[i]].ptime==1)
            {
			    count++;
                Doc[i]=0;
            }
            else
            {
                p[Print[i]].ptime--;
            }
           }
       }
	   time++;

    }
    
    return 0;

}


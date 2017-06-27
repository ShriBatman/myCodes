//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
#define e 100000

using namespace std;


int minDistance(long long int dist[], bool sptSet[],int x)
{
   long long int min = INT_MAX;
   int min_index;
  
   for (int v = 0; v < x; v++){
     if (sptSet[v] == false && dist[v] <= min)
     {	 
         min = dist[v];
		 min_index = v;
     }
}
  
   return min_index;
}
  
void printSolution(long long int dist[], int x)
{
   for (int i = 0; i < x; i++)
   cout<<dist[i]<<"\t";
   
   cout<<"\n";
   
}
  
void dijkstra(long int graph[e][e],int src,int x)
{
     long long int dist[x];       
     bool sptSet[x];
  
     for (int i = 0; i < x; i++){
        dist[i] = INT_MAX; 
		sptSet[i] = false;
    }
  
     dist[src] = 0;
  
     for (int count = 0; count < x-1; count++)
     {
       int u = minDistance(dist,sptSet,x);
  
       sptSet[u] = true;
  
       for (int v = 0; v < x; v++){
       
         if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]+graph[u][v] < dist[v])
            dist[v] = dist[u] + graph[u][v];
		}
	 }
  
     printSolution(dist, x);
}

int main()
{
	long long int i,j,k,l,m,n,r,t,s,x,y,z,p,q,w;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n>>k>>x>>m>>s;
		//vector< vector<long int> >a(n,vector<long int>(n));
		long int a[e][e];
		for(j=0;j<n;j++)
		{
			for(l=0;l<n;l++)
			{
				if(j!=l && j<k && l<k)
				a[j][l]=x;
				else
				a[j][l]=0;
			}
			
		}
		
		//for(j=0;j<n;j++)
		//{
		//	for(l=0;l<n;l++)
		//	{
		//		cout<<a[j][l]<<"\n";
		//	}
			
		//}
		for(j=0;j<m;j++)
		{
			cin>>p>>q>>w;
			a[p-1][q-1]=w;
			a[q-1][p-1]=w;
		}
		
		/*for(j=0;j<n;j++)
		{
			for(l=0;l<n;l++)
			{
				cout<<a[j][l]<<"\t";
			}
			cout<<"\n";
			
		}*/
		
		dijkstra(a,s-1,n);
		
	}
	
    return 0;
}


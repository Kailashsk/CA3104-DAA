//Prim's Algorithm
#include<stdio.h>
#define infinity 9999
#define MAX 20
int G[MAX][MAX],spanning[MAX][MAX];
int n;
void main()
{

	int i,j,total_cost;
	printf("Ntr No. of vertex for given graph\n");
	scanf("%d",&n);
	printf("Ntr adjucent Matrix\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);
	printf("The adjucent Matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	       {
		printf("%4d",G[i][j]);

	      }
	      printf("\n");
	}
       total_cost=prim();
	printf("The spanning tree Matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	       {
		printf("%4d",spanning[i][j]);

	      }
	      printf("\n");
	}
printf("\nTotal Cost of Spanning tree=%d",total_cost);
printf("\n");
}
int prim()
{        int i,j;
	int cost[MAX][MAX];
	int distance[MAX],visited[MAX],from[MAX];
	int min_cost,no_of_edges,min_distance,v,u;
	//CREATION OF COST AND SPANNING MATRIX
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(G[i][j]==0)
				cost[i][j]=infinity;
			else
				cost[i][j]=G[i][j];
				spanning[i][j]=0;
		}
       //Initialise distance[],visited[],from[]
	distance[0]=0;
	visited[0]=1;
	for(i=1;i<n;i++)
	{
		distance[i]=cost[0][i];
		from[i]=0;
		visited[i]=0;
	}
       min_cost=0;//cost of spanning tree
       no_of_edges=n-1;//No. of edges will be added
       while(no_of_edges>0)
       {
		//find the vertex at minimum deistance from the tree
		min_distance=infinity;
		for(i=1;i<n;i++)
			if(visited[i]==0 && distance[i]<min_distance)
			{
				v=i;
				min_distance=distance[i];
			}
	       u=from[v];
	       //Inserting edge in spanning tree
	       spanning[u][v]=distance[v];
	       spanning[v][u]=distance[v];
	       no_of_edges--;
	       visited[v]=1;
	       //updating the distance[] array
	       for(i=1;i<n;i++)
			if(visited[i]==0 && cost[i][v] < distance[i])
			{
				distance[i]=cost[i][v];
				from[i]=v;
			}
	     min_cost=min_cost+cost[u][v];
       }
 return(min_cost);

}


//@Ks

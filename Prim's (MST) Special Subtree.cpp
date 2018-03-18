//Author: Bishal Sarang
//Prims Algorithm for MST

#include <bits/stdc++.h>
#define MAX 3003
#define INF 1000000
using namespace std;

//Adjacency List
//Array of Vector Pairdist[v.second]
vector< pair<long long, int>> adj[MAX];
//Store Distance of Vertex
long long dist[MAX];
bool Visited[MAX];
int weight[MAX];


//Prims Algorithm  Procedure
void prims(int s, int v)
{
    //Initialize all distances to infinite
   memset(dist, INF, sizeof(dist));
   //Initialize all parent vertex to -1
   memset(weight, 0, sizeof(weight));
    //Declare priority que to extract minimum distance every time
    priority_queue< pair <long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

    //Initialize priority que with infinite distance and all the vertices
    for(int i = 1; i <= v; i++)
        {
            pq.push({INF, i});
        }

    dist[s] = 0;
    pq.push({0, s});
    while(!pq.empty())
    {
        //Extract minimum weight and pop it
        int w = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        //Put popped Value to visited set
        Visited[u] = true;

        for(auto v: adj[u])
        {
            if(!Visited[v.second]) //If the vertex is already in MST Set Ignore
                {
                    if( dist[v.second] > v.first )
                {
                    dist[v.second] = v.first;
                    weight[v.second] = dist[v.second] ;
                    pq.push({dist[v.second], v.second});
                }
                }

        }
    }
}
int main()
{
    //freopen("prims.txt", "r", stdin);
    int vertex, edges;
    cin >> vertex >> edges;
    int u, v, w;
    for(int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }
    int s;
    cin >> s;
    //Arbitarily Choose any vertex as source
    prims(s, vertex);

    int sum =0;
    for(int i = 1; i <= vertex; i++)
        sum += weight[i];
    cout  <<  sum;
    return 0;
}

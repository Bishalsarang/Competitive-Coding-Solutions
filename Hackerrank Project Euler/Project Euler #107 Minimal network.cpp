//Author: Bishal Sarang


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


void prims(int s, int v)
{
    
   memset(dist, INF, sizeof(dist));
   memset(weight, 0, sizeof(weight));
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

    int vertex, edges;
    cin >> vertex >> edges;
    int u, v, w;
    for(int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }
    prims(1, vertex);
    int sum =0;
    for(int i = 1; i <= vertex; i++)
        sum += weight[i];
    cout  <<  sum;
    return 0;
}

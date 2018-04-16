//Author: Bishal Sarang
#include <bits/stdc++.h>
#define MAX 100006

using namespace std;
vector<long long> adj[MAX];
bool Visited[MAX];
long long counter;
void dfs(long long s)
{
    counter++;
    Visited[s] = true;
    for(auto v: adj[s])
    {
        if(!Visited[v])
        {
            Visited[v] = true;
            dfs(v);
        }
    }
    return;
}
int main() {
     long  long n, p;
    cin >> n >> p;
    long long x, y;
    for(long long i = 0; i < p; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<long long> group;
long long one = 0;
    
  for(int i = 0; i < n; i++)
    {
        counter = 0;
        if(!Visited[i])
        {
            dfs(i);
            if(counter > 1)
                group.push_back(counter);
            else
                one++;
            
        }   
      
    }
    int len = group.size();
    long long total = 0;
    for(int i = 0; i < len; i++)
    {
        total += group[i] * one;
        for(int j = 0; j < i; j++)
        {
                total += group[i] * group[j];
        }
    }
  
    cout << total + (one * (one - 1) / 2);
    return 0;
}

//Author: Bishal Sarang
#include <bits/stdc++.h>


using namespace std;
vector<int> adj[1002];
bool visited[1002];
int dist[1002];

void bfs(int s) {
    
    memset(dist, 0, sizeof(dist));
    memset(visited, 0, sizeof(visited));

    visited[s] = true;
    queue < int > q;
    q.push(s);
    dist[s] = 0;

    while (!q.empty()) {
        int top = q.front();
        q.pop();
        for (auto neigh: adj[top]) {

            if (!visited[neigh]) {
                visited[neigh] = true;
                dist[neigh] = dist[top] + 6;
                q.push(neigh);

            }

        }

    }

}
int main() {
        int q;
        cin >> q;
        int nodes, edges;
        while (q--) {
            cin >> nodes >> edges;
             memset(adj, 0, sizeof(adj));

            int x, y;
            for (int i = 0; i < edges; i++) {
                cin >> x >> y;
                adj[x].push_back(y);
                adj[y].push_back(x);
            }

            int source;
            cin >> source;
            bfs(source);
            for (int i = 1; i <= nodes ; i++)
            {
                if(source != i)
                {
                    if (dist[i] == 0)
                    cout << -1 << " ";
                else
                    cout << dist[i] << " ";
                }
            }
            cout << endl;

        }
         return 0;
}
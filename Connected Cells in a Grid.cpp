//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;
int n, m;
vector < pair<int, int> > adj[11][11];
int node_val = 0;
int largest;
bool visited[11][11];

bool is_valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int si, int sj) {

    visited[si][sj] = true;
    for (auto neighbours: adj[si][sj]) {
        if (!visited[neighbours.first][neighbours.second]) {
           visited[neighbours.first][neighbours.second] = true;
            largest++;
            dfs(neighbours.first, neighbours.second);
        }

    }

}
int main() {

    cin >> n >> m;
    int a[n][m] = {};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
               cin >> a[i][j];
        }
     int dx[] = {-1, 1, -1, -1, 0, 0, 1,1};
    int dy[] = {0, 0, -1, 1, -1, 1, -1, 1}; 
    int row, col;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < 8; k++) {
                row = dx[k] + i;
                col = dy[k] + j;
              if(a[row][col] == 1 && a[i][j] == 1 && is_valid(row, col))
            {
                adj[i][j].push_back({row, col});
            }
            }
        }

    }
    int all = m * n;
    int prev = 1;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
    {
        dfs(i, j);
        prev = max(largest + 1, prev);
        largest = 0;
        memset(visited, 0, sizeof(visited));
    }
    }
    cout << prev;

    return 0;
}

//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
      for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
             map<pair<int, int>, bool> visited;
            map<pair<int, int>, int> dist;
            queue<pair<int, int>> q;
            q.push({i, j});
            visited[{i, j}] = true;
            dist[{i, j}] = 1;
            bool flag = false;
            while(!q.empty())
            {
                int x  = q.front().first;
                int y  = q.front().second;
              //  cout << "Visiting neigh :" << x_org << " and " << y_org << endl; 
               q.pop();
                //neighbours
                int dx[] = {-i, -i, i, i,-j, j, j, -j };
                int dy[] = {-j, j, j, -j, -i, -i, i, i};
                for(int k = 0; k < 8; k++)
                {
                   int row = x + dx[k];
                   int col = y +  dy[k];
                    if(row >= 0 && row < n && col >= 0 && col < n)
                    {
                        
                    if(!visited[{row, col}])
                    {
                       //cout << "Neighbours of " << x << " and " << y << endl; 
                       //  cout << row << " " << col << endl;
                        visited[{row, col}] = true;
                        q.push({row, col});
                        dist[{row, col}] = dist[{x, y}] + 1;
                        if( row == n - 1 && col == n - 1)
                          {
                            flag = true;
                            break;
                        }
                       
                    }
                    }
                    
                }
                
                if(flag)
                {
                    
                    cout << dist[{n - 1, n - 1}] << " ";
                    break;
                }
                
              
             }
            if(!flag)
            {
                if(i == n -1 && j == n - 1)
                    cout << dist[{n - 1, n - 1}] ;
                else 
                    cout << -1 << " ";
            }
            
            
           
        }
        cout << endl;
    }
    return 0;
}

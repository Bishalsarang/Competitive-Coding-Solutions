//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;
    int n, k;
bool isvalid(int x, int y)
{
    if(x >= 1 && y >= 1 && x <= n && y <= n)
        return true;
    return false;
}

int main() {

    cin >> n >> k;
    int dx_sida[] = {0, 0 , -1, 1};
    int dy_sida[] = {1, -1, 0, 0 };
    
    int dx_diag[] = {1, 1, -1, -1};
    int dy_diag[] = {-1, 1, -1, 1};
    pair < int, int > queen;
    cin >> queen.first >> queen.second;
    vector < pair < int, int >> obstacles(k);
    int x, y;
    map < pair < int, int > , bool > occupied;

    for (int i = 0; i < k; i++) {
        cin >> x >> y;
        obstacles[i] = make_pair(x, y);
        occupied[{x, y}] = true;

    }

    int count = 0;
    for (int i = 0; i < 4; i++) //Horizontal Verical
    {
        int row = queen.first, col = queen.second;

        for (int j = 1; j <= n; j++) {
            row += dx_sida[i];
            col += dy_sida[i];

            if (isvalid(row, col)) {
               if (occupied[{ row, col}])
                    break;
                             count++;
            }

        }

    }

    for (int i = 0; i < 4; i++) //Diag
    {
        int row = queen.first, col = queen.second;

        for (int j = 1; j <= n; j++) {
            row += dx_diag[i];
            col += dy_diag[i];

            if (isvalid(row, col)) {
                if (occupied[{ row, col}])
                    break;

                count++;
            }

        }

    }
    cout << count;
    return 0;
}
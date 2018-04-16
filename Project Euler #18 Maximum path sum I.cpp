//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;
int dp[16][16];

int n;
int findMax(int row , int col)
{
    if( row == n - 1)
        return dp[row][col];
    return dp[row][col] + max(findMax(row + 1, col), findMax(row + 1,col + 1));
    
    
}

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                cin >> dp[i][j];
            }
            

            }
        cout << findMax(0, 0) << "\n";
    }
    return 0;
}
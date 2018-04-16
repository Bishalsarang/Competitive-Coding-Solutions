//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;
int dp[101][103];

int n;
int findMax()
{
    for(int i = n - 2; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            if(dp[i + 1][j] > dp[i + 1][j + 1])
                dp[i][j] += dp[i + 1][j];
            else
                dp[i][j] += dp[i + 1][j + 1];
        }
    }
    
    return dp[0][0];
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
        cout << findMax() << "\n";
    }
    return 0;
}

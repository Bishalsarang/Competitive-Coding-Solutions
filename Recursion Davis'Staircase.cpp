//Author: Bishal 
#include <bits/stdc++.h>

using namespace std;
int dp[37];
void steps()
{
    dp[0] = 1, dp[1] = 1, dp[2] = 2;
     for(int i = 3; i <= 36; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
}

int main() {
   int s, n;
    steps();
    cin >> s ;
    while(s--)
    {
        cin >> n;
        cout << dp[n] << "\n";
        
    }
    return 0;
}

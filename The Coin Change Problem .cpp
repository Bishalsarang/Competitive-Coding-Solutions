//Author: Bishal Sarang
#include <bits/stdc++.h>
#define MAX 250

using namespace std;

long dp[MAX + 1] = {};

int main() {
    long n, m;
    cin >> n >> m;
    int coins[m];
    int val;
    for(int i = 0; i < m; i++)
        cin >> coins[i];
    dp[0] = 1;
    for (auto coin: coins) 
        for (auto i = coin; i <= n; i++) 
            dp[i] += dp[i - coin] ;
    cout << dp[n];
    
    return 0;
}
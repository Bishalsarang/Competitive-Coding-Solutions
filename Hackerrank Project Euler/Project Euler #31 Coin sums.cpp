//Author: Bishal Sarang
#include <bits/stdc++.h>
#define MAX 100000
#define m 1e9 + 7
using namespace std;

long dp[MAX + 1] = {};
int coins[] = {1, 2, 5, 10, 20, 50, 100, 200};

void change() {
    dp[0] = 1;
    for (auto coin: coins) 
        for (auto j = coin; j <= MAX; j++) 
            dp[j] = (dp[j] + dp[j - coin]) % (1000000007) ;
}

int main() {
    change();
    long T;
    cin >> T;
    long val;
    while (T--) {
        cin >> val;
        cout << dp[val] << "\n";
    }
    return 0;
}
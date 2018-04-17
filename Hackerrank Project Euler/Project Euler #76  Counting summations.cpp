//Author: Bishal Sarang
#include <bits/stdc++.h>
#define MAX 1000
#define MOD 1000000007
using namespace std;

typedef unsigned long long ull; 

ull dp[MAX + 1];
   
void change(int n)
{
       dp[0] = 1;
        for(long i = 1; i < n; i++)
            {
                for(auto j = i; j <= n; j++)
                   {
                        dp[j] += dp[j - i] % MOD;  
                    }
            }
    
}
int main() {

//    change();
    
    int T;
    cin >> T;
    int n;
    
    while(T--)
    {
        fill(dp, dp + MAX, 0);
        cin >> n;
        change(n);
        cout << dp[n] % MOD << "\n";
    } 
    return 0;
}

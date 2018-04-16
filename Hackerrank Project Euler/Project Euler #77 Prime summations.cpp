//Author: Bishal Sarang
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

vector<bool> all(MAX + 1, true);
vector<int> primes;
long dp[MAX + 1];
   

void generatePrimes()
{
    all[0] = false, all[1] = false;
    
    for(int i = 2; i * i <= MAX; i++)
    {
        if(all[i])
        {
            for(int j = 2 * i; j <= MAX; j += i)
            {
                all[j] = false;
            }
        }
    }
    
    for(int i = 2; i <= MAX; i++ )
    {
        if(all[i])
            primes.push_back(i);
    }
    
}

void change()
{
       dp[0] = 1;
        for(auto num: primes)
            {
                for(auto j = num; j <= MAX; j++)
                   {
                        dp[j] += dp[j - num];  
                    }
            }
    
}
int main() {
    generatePrimes();
    change();
    
    int T;
    cin >> T;
    int n;
    
    while(T--)
    {
        cin >> n;
        cout << dp[n] << "\n";
    } 
    return 0;
}

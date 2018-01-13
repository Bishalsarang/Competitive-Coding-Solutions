#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int dp[101]={0};
void initialise()
{
    dp[0] = 0,dp[1] = 0;
    dp[2] = 1,  dp[3] = 1, dp[4] = 1;
    for(int i = 5;i < 101; i++)
    {
        if(!dp[i-2] || !dp[i-3] || !dp[i-5])
            dp[i] = 1;
        else
            dp[i] = 0;
    }
}

int main() {
    initialise();
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        if(dp[N])
            cout << "First \n";
        else
            cout << "Second \n";
    }
    return 0;
}
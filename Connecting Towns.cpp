//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        unsigned long long routes[n];
        unsigned long long ways = 1;
        for(int i = 0; i < n - 1; i++)
        {
            cin >> routes[i];
            ways = ways % 1234567 * routes[i] % 1234567 ;
        }
        cout << ways % 1234567 << "\n";
    
    }
    return 0;
}
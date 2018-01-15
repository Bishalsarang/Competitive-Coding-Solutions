//AuthorL Bishal Sarang
#include <bits/stdc++.h>

using namespace std;


int main() {
   int n, k, a;
    int maxm = -1;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        maxm = max(a, maxm);
    }
    
    k <= maxm ? cout << maxm - k : cout << 0;
    return 0;
}
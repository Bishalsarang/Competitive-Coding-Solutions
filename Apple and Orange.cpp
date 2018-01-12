//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t, a, b, m, n;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    int dist_a, dist_b;
    int res_a, res_b;
    int aCount = 0, bCount = 0;
    for (int i = 1; i <= m; i++) {
        cin >> dist_a;
        res_a = a + dist_a;
        if (res_a >= s && res_a <= t)
             aCount++;
    }

    for (int i = 1; i <= n; i++) {
        cin >> dist_b;
        res_b = b + dist_b;
        if (res_b >= s && res_b <= t) 
            bCount++;
    }
    cout << aCount << endl;
    cout << bCount;
  
    return 0;
}
//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T, n, m, s;
    cin >> T;
    while(T--)
    {
        cin >> n >> m >> s;
      if(!((m + s - 1) % n))
         cout << n << "\n";
       else
         cout <<  (m + s - 1) % n << "\n";
    }
    return 0;
}

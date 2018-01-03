//Author: Bishal Sarang
#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

int main() {
   
    unsigned long long T;
    cin >> T;
    
    vector < char > all(MAX + 1, true);
    all[0] = all[1] = false;
    for (unsigned long long i = 2; i * i <= MAX; ++i)
        if (all[i])
            for (unsigned long long j = 2 * i; j <= MAX; j += i)
                all[j] = false;

    map < unsigned long long, bool > tprime;
    for (unsigned long long i = 2; i < MAX; i++)
        if (all[i]) 
            tprime[i * i] = true;

    unsigned long long a;
    while (T--) {
        cin >> a;
        if (tprime[a])
            cout << "YES \n";
        else
            cout << "NO \n";
    }
    return 0;
}
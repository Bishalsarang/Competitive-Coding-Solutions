//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;


int main() {
    int T;
    cin >> T;
    unsigned long long num;
    while(T--)
    {
        cin >> num;
        cout << bitset<32>(num).flip().to_ulong() << "\n";
    }
    return 0;
}
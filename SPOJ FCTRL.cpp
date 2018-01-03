//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

unsigned long long Zeroes(unsigned long long n) {
 int count = 0;
 for (unsigned long long i = 5; n / i >= 1; i *= 5)
        count += n / i;

    return count;
}

int main() {
    int T;
    cin >> T;
    int s;
    while (T--) {
        cin >> s;
        cout << Zeroes(s) << "\n";
    }
    return 0;
}
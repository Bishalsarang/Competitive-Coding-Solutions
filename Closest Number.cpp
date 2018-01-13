//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin >> T;
    long a, b, x, low, up;
    while (T--) {
        cin >> a >> b >> x;

        low = x * (int)((pow(a, b) / x));
        up = x * ((int)((pow(a, b) / x) + 1));

        if (((int)((pow(a, b))) - low) < up - (int)((pow(a, b))))
            cout << low << "\n";
        else
            cout << up << "\n";

    }
    return 0;
}

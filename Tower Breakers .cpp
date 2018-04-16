//Author: Bishal sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    long n, m;
    while(t--)
    {
        cin >> n >> m;
        //initialise(n, m);
        if(n % 2 == 0 || m == 1)
            cout << 2 << "\n";
        else
            cout << 1 << "\n";
    }
    return 0;
}

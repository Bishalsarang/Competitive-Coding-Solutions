//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main()
{
    long t, l, b;
    cin >> t;
    while(t--)
    {
        cin >> l >> b;
        cout << l * b /(__gcd(l, b) * __gcd(l, b)) << "\n";
    }

    return 0;
}
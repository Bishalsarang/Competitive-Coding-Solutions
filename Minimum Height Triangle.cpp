//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main() {
	ll b, a;
    cin >> b >> a;
    ull ans = ceil(2 * ((long double)a / b));
    cout << ans;
	return 0;
}

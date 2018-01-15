//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    int maxm = -9999;
    for(int i = l; i <= r; i++)
        for(int j = l; j <=i; j++)
            maxm = max(i ^ j, maxm);
	 cout << maxm;
	return 0;
}
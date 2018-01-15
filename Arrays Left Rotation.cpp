//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n), b(n);
     for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        b[i] = a[(i + k) % n];
    for(auto x: b)
        cout << x << " ";

    return 0;
}

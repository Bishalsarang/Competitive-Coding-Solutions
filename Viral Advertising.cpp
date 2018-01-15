//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int liked = 2, total = 2, passed;
    for(int i = 1; i < n; i++)
    {
        passed = liked * 3;
        liked = floor(passed / 2);
        total += liked; 
    }
    cout << total;
    return 0;
}

 //Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector < long > array(n);
    map < int, int > freq;
    int val;
    while (m--) {
        for (int i = 0; i < n; i++)
            cin >> array[i];
        auto pos = find(array.begin(), array.end(), * max_element(array.begin(), array.end()));
        val = pos - array.begin();
        freq[val + 1]++;

    }
    int maxm = -1;
    for (auto x: freq)
        maxm = max(maxm, x.second);
    //	cout << x.first << " " << x. second << "\n";
    for (auto x: freq)
        if (maxm == x.second) {
            cout << x.first;
            return 0;
        }

    return 0;
}
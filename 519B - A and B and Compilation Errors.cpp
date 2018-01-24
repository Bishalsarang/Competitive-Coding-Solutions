//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector < long > first, second, third, fourth;
    map < long, int > pailo, dosro;
    long x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        first.push_back(x);
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        pailo[x]++;
        second.push_back(x);
    }
    for (auto x: first) {
        if (pailo[x] != 0) 
            pailo[x]--;
        else
            cout << x << " ";
    }
    cout << "\n";
    for (int i = 0; i < n - 2; i++) {
        cin >> x;
        dosro[x]++;
        third.push_back(x);
}
    for (auto x: second) {
        if (dosro[x] != 0) 
            dosro[x]--;
        else
            cout << x << " ";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int n;
int minimumTime(vector <int> x) {
    //  Return the minimum time needed to visit all the houses.
    sort(x.begin(), x.end());
    return x[n - 1] - x[0];
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        
        cin >> n;
        vector<int> x(n);
        for(int x_i = 0; x_i < n; x_i++){
           cin >> x[x_i];
        }
        int result = minimumTime(x);
        cout << result << endl;
    }
    return 0;
}

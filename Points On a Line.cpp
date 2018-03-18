//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector <int> x(n), y(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    if(count(x.begin(), x.end(), x[0]) == n || count(y.begin(), y.end(), y[0]) == n)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
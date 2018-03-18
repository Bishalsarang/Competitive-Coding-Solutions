//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;


int main() {
   // freopen("in.txt", "r", stdin);
    long t;
    cin >> t;
    while(t--)
    {
        long m, n, cost;
        cin >> m >> n;
        map<long, bool> xa;
        map<long, long> index;

        for(int i = 0; i < n; i++)
        {
            cin >> cost;
            if(xa[cost])
                cout << index[m - cost] << " " <<  i + 1;
            xa[m - cost] = true;
            index[cost] = i + 1;
        }
        cout << "\n";
    }
    return 0;
}
//Author: BIshal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    int c[n];
    int amount = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> c[i];
        if( i != k)
            amount += c[i];
    }
    int half = amount / 2;
    int anna_paid;
    cin >> anna_paid;
    if(half >= anna_paid)
        cout << "Bon Appetit";
    else
        cout << anna_paid - (half);
    return 0;
}

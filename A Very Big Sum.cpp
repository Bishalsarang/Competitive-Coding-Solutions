#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    ll array[n];
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {  
        cin >> array[i];
        sum += array[i];
    }
    cout << sum;
    return 0;
}

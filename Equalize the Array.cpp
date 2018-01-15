//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector <int> array(n);
    int freq[101] = {0};
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
        freq[array[i]]++;
    }
    cout << n - *max_element(freq, freq + 101);
    return 0;
}
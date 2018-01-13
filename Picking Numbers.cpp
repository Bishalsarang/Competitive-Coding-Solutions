//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int array[n];
    int freq[101] = { };
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
        freq[array[i]]++;
    }
    int maxm = -9999;
    int max_index = *max_element(array, array + n);
    for(int i = 1; i <= max_index; i++)
        maxm = max(maxm, freq[i-1]+ freq[i]);
    cout << maxm;
    return 0;
}

//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int swapped = 0;
    for(int i = n - 1; i >= 0; i--)
        for(int j = 0; j < i; j++)
            if(a[j] > a[j + 1])
            {
                swap(a[j] , a[j + 1]);
                swapped++;
            }
    cout << "Array is sorted in " << swapped << " swaps.\n";
     cout << "First Element: " << a[0] << "\n";
    cout << "Last Element: " << a[n - 1] << "\n";
    return 0;
}
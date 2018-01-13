//Author : Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
   long n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
            cin >> array[i];
    sort(array, array + n);
    int minm = 99999;
   for(int i = 1; i < n; i++)
       minm = min(minm, abs(array[i - 1] - array[i]));
    cout << minm;
    return 0;
}

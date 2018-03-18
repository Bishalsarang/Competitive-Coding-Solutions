//Author: Bishal sarang
#include <bits/stdc++.h>
using namespace std;

int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + N);
   for(i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

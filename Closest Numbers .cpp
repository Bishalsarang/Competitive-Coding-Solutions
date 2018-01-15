//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
 
    int N;
   cin >> N;
    int array[N];
    for(int i = 0; i < N; i++)
        cin >> array[i];
    sort(array, array + N);
    int minm = INT_MAX;
    for(int i = 0; i < N; i++)
        minm = min(minm, abs(array[i] - array[i - 1]));
     for(int i = 0; i < N; i++)
       if (abs(array[i] - array[i - 1]) == minm)
           cout << array[i - 1]  << " " << array[i] << " ";
 
    return 0;
}

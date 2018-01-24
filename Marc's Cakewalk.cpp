//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    long long cakes[N];
    for(int i = 0; i <N; i++)
        cin >> cakes[i];
    sort(cakes, cakes + N,greater<int>());
    long long miles = 0;
    for(int i = 0; i < N; i++)
        miles += cakes[i] * pow(2.0, i);
   cout << miles;
    return 0;
}

//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int num = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        num ^= a[i];
    }
    cout << num;
}
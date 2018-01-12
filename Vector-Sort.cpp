//AUthor: BisHAL Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
    int num,x;
    cin >> num;
    vector <int> a;
    for(int i = 0; i < num; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(auto x: a)
        cout << x << " ";
    return 0;
}

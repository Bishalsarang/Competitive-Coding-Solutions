//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> p(n + 1);
     vector<int> cp(n + 1);
    
    for(int i = 1; i <= n; i++)
    {
        cin >> p[i];
    
    }
    map<int, int> mp;
      for(int i = 1; i <= n; i++)
    {
        mp[p[p[i]]] = i;
    
    }
    for(auto x: mp)
        cout << x.second << "\n";
    

    return 0;
}

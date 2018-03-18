//AUthor: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long k;
    cin >> n >> k;
    vector<long> arr(n);
    map<long, bool> mp;
    for(int i = 0; i < n; i++){
       cin >> arr[i];
       int up = arr[i] + k;
    mp[up] = true;
    }
 
    
    int count = 0;
      for(int i = 0; i < n; i++){
       if(mp[arr[i]])
       {
           if(mp[arr[i]])
           //cout << arr[i];
           mp[arr[i]] = false;
           count++;
       }
    }
    cout << count  << endl;
    return 0;
}

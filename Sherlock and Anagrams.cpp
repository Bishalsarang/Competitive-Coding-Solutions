//Author : Bishal Sarang 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    string s, naya;
    
    while(t--)
    {
        map <string, int> mp;
        cin >> s;
        int len = s.length();
        for(int i = 0, k = len ; i < len; i++ , k--)
        {
            for(int  l = k; l > 0;  l--)
            {
                naya = s.substr(i, l);
                sort(naya.begin(), naya.end());
                mp[naya]++ ;
              }
        }
        int sum = 0;
        for(auto x: mp)
            sum += (x.second * (x.second - 1) / 2);
        cout << sum << "\n";
        
}
     return 0;
}
//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
    int height[26] = {0};
    for(int i = 0; i < 26; i++)
      cin >> height[i];
    string s;
    cin >> s;
    int len = s.length();
    int maxm = -99999;
    for(int i = 0; i < len; i++)
          maxm = max(height[s[i] - 'a'], maxm);
     cout << len * maxm;
    return 0;
}

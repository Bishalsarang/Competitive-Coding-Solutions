//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s;
  cin >> s;
  int len = s.length();
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j + 1 < s.size(); j++) {
      if (s[j] == s[j + 1]) {
        s.erase(s.begin() + j, s.begin() + j + 2);
        break;
      }
    }
  }
  if (s.empty()) {
    s = "Empty String";
  }
  cout << s << endl;

  return 0;
}
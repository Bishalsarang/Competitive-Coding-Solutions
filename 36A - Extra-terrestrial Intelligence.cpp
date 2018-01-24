//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int len = s.length();
  int index[100];
  bool first = true, second = true;
  int dist = 0, index_first, prev_index;
  for (int i = 0; i < len; i++) {
    if (s[i] == '1' && first) {
      first = false;
      //ut << "here";
      index_first = i;
      continue;
    }
    if (s[i] == '1' && second) {
      second = false;
      prev_index = i;
      dist = i - index_first;

      //out << dist << "\n";
      continue;
    }
    if (s[i] == '1') {

      if (i - prev_index != dist) {
        cout << "NO";
        return 0;
      }
      prev_index = i;

    }

  }
  cout << "YES";

  return 0;
}
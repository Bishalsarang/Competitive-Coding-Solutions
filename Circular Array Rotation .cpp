//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k, q;
  cin >> n >> k >> q;
  int rot = k % n;
  vector < int > vect(n);
  for (int i = 0; i < n; i++)
    cin >> vect[i];
  int m;
  while (q--) {
    cin >> m;
    cout << vect[(m - rot + n) % n] << "\n";
  }
  return 0;
}
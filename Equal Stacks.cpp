//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  vector < long long > A(a), B(b), C(c);
  vector < long long > sum_A(a), sum_B(b), sum_C(c);
  unordered_map < long long, long long > check;
  for (int i = 0; i < a; i++) {
    cin >> A[i];

  }
  sum_A[0] = A[a - 1];
  check[sum_A[0]]++;
  for (int i = a - 2, j = 1; i >= 0; i--, j++) {

    sum_A[j] = sum_A[j - 1] + A[i];
    check[sum_A[j]]++;

  }

  for (int i = 0; i < b; i++) {
    cin >> B[i];
  }
  sum_B[0] = B[b - 1];
  check[sum_B[0]]++;
  for (int i = b - 2, j = 1; i >= 0; i--, j++) {

    sum_B[j] = sum_B[j - 1] + B[i];
    check[sum_B[j]]++;

  }
  for (int i = 0; i < c; i++) {
    cin >> C[i];
  }
  sum_C[0] = C[c - 1];
  check[sum_C[0]]++;
  for (int i = c - 2, j = 1; i >= 0; i--, j++) {

    sum_C[j] = sum_C[j - 1] + C[i];
    check[sum_C[j]]++;

  }
  vector < long long > heights;
  heights.push_back(0);
  for (auto x: check) {
    if (x.second == 3) {
      heights.push_back(x.first);
    }

  }
  cout << * max_element(heights.begin(), heights.end());
  return 0;
}
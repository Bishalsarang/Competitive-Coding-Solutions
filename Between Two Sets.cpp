//Author : Bishal Sarang
#include <bits/stdc++.h>

  using namespace std;
int lcmcalc(int arr[], int n) {
  //int hcf = a[0], lcm;
  int ans = arr[0];
  for (int i = 1; i < n; i++)
    ans = (arr[i] * ans) / (__gcd(arr[i], ans));
  return ans;
}

int main() {
  int n, m;
  cin >> n >> m;
  int a[n], b[m];
  int lcm, hcf, hcf_B;

  for (int i = 0; i < n; i++) 
    cin >> a[i];
  
  for (int i = 0; i < m; i++) 
    cin >> b[i];
  
  if (n == 1)
    lcm = a[0];
  else
    lcm = lcmcalc(a, n);
  
  //   cout << lcm;
  if (m == 1)
    hcf_B = b[0];
  else {
    hcf_B = __gcd(b[0], b[1]);
    // int lcm = (a[0] * a[1]) / hcf;
    for (int i = 2; i < m; i++) {
      hcf_B = __gcd(b[i], hcf_B);
      //lcm = (a[0] * a[1]) / hcf;
    }
  }
  // cout << hcf_B;

  int count = 0;
  for (int i = lcm; i <= hcf_B; i += lcm) {
    if (hcf_B % i == 0)
      count++;
  }
  cout << count;
  return 0;
}
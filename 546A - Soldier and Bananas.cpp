//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	long k, n, w;
	cin >> k >> n >> w;
	
	int total = k * w * ((float)(w + 1) / 2);
	n > total ?cout << 0 : cout << total - n;
  return 0;
  }
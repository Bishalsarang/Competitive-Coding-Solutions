//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;
  if(n == 1)
{
	cout << 0;
	return 0;
}
  for (int i = 1; i <= n; i++)

  {
    if (m < i)
      break;
    m -= i;;
    if (i == n && m > 0) {
      i = 1;
      m = m - 1;

    }

  }
  cout << m;
  return 0;
}
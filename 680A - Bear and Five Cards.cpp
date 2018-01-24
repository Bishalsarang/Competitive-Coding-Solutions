//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {

  int array[5], freq[101] = { };
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    cin >> array[i];
    freq[array[i]]++;
    sum += array[i];
  }

  int maxm_index = * max_element(array, array + 5);
  int maxm = -9999;
  bool flag = false;
  for (int i = 0; i <= maxm_index; i++) {

    if (freq[i] > 1) {

      flag = true;
      if (freq[i] > 3)
        maxm = max(maxm, i * 3);
      else
        maxm = max(maxm, freq[i] * i);
    }

  }

  if (flag)
    cout << sum - maxm;
  else
    cout << sum;

  return 0;
}
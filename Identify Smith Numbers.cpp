//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
    long N, cp, count = 0;;
    cin >> N;
    cp = N;
    vector <string> factors;
    for(int i = 2; i * i <= N; i++)
    {
        while(N % i == 0)
        {
            N /= i;
          //  cout << i << " ";
            factors.push_back(to_string(i));
            count++;
             }
     }
    if(N > 1)
    {
        factors.push_back(to_string(N));
        count++;
    }
    string s = to_string(cp);
    int sum = 0,sum_fac= 0;
    for(int i = 0; i < s.length(); i++)
        sum += (s[i] - '0');
    for(int i = 0; i < count; i++)
      for(int j = 0; j < factors[i].length(); j++)
          sum_fac += (factors[i][j] - '0');
    if(sum == sum_fac)
        cout << 1;
    else
        cout << 0;
    
    return 0;
}
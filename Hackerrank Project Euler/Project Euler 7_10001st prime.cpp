//Project Euler #7: 10001st prime
//Author:Bishal Sarang
#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;

int main() {
   
    int T;
    cin >> T;
    vector < char > all(MAX + 1, true);
    all[0] = all[1] = false;
    for (int i = 2; i * i <= MAX; ++i)
        if (all[i])
                for (int j = 2 * i; j <= MAX; j += i) //Mark all multiple of number i as false
                    all[j] = false;
    
   vector <int> primes(MAX + 1);
    int j = 1;
    for(int i = 0; i < MAX; i++)
       if (all[i])
       {
           primes[j] = i;
           j++;
       }
    
    int n;
    while(T--)
    {
        cin >> n;
        cout << primes[n] << "\n";
    }
    return 0;
}
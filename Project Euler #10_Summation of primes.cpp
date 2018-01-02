
#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;


int main(){
    int T;
    cin >> T;

    //sieve of eranthoses 
     vector < char > all(MAX + 1, true);
    all[0] = all[1] = false;
    for (int i = 2; i * i <= MAX; i++)
        if (all[i])
                for (int j = 2 * i; j <= MAX; j += i) //Mark all multiple of i as false
                    all[j] = false;
    
   vector <long long> primes(MAX + 1); //Vector to store prime umbers upto MAX
    int j = 1;
    for(int i = 0; i <= MAX; i++)
       if (all[i])
       {
           primes[j] = i;
           j++;
       }
    int n;

     while(T--)
    {
        cin >> n;
        long long sum = 0;
        int i = 1;
        while(primes[i] <= n)
        {
            sum += primes[i];
            i++;
        }
        cout << sum << "\n";
    }
    return 0;
}

//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
   int t;
    cin >> t;
    long long num, piles;
    while(t--)
    {
        cin >> piles;
        int num_of_piles = piles;
        int num;
        int ones = 0;
        cin >> num;
        long long ans = num ;
        
        piles--;
        while(piles--)
        {
           cin >> num;
            ans ^= num;
        }
         if(ans  != 0)
             cout << "First\n";
        else 
            cout << "Second\n";
    }
    return 0;
}

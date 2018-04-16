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
        long long num_of_piles = piles;
        long  long num;
        long long ones = 0;
        cin >> num;
        long long ans = num ;
        if(ans == 1)
            ones++;
        piles--;
        while(piles--)
        {
            cin >> num;
            if(num == 1)
                ones++;
            ans ^= num;
        }
        if(ones == num_of_piles && ones % 2 == 0)
            cout <<  "First\n";
        else if(ans == 0 || (ones == num_of_piles && ones % 2 != 0))
             cout << "Second\n";
        else 
            cout << "First\n";
    }
    return 0;
}
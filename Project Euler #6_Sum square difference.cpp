//Author:Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main(){
   int T;
   cin >> T;
   unsigned long long sum_of_squares , n,squares_of_sum;
   while(T--)
    {
        cin >> n;
        sum_of_squares = (n * (n + 1) * (2 * n + 1)) / 6;
        squares_of_sum = ( n * (n + 1)) / 2;
        cout << ( squares_of_sum *squares_of_sum - sum_of_squares ) << "\n";
    }
    return 0;
}

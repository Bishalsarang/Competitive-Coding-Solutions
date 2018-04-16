//Author: Bishal Sarang
#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

    vector < char > all(MAX + 1, true);
bool is_trucatable(long n)
{
    int count_1 = 0, count_2 = 0;
    long quo = n, rem, rev = 0;
    
    while (quo) {
        rem = quo % 10;
        quo /= 10;

        rev = rev * 10 + rem;
     
        long quo_in = rev, rem_in, rev_in = 0;
        while (quo_in) {

            rem_in = quo_in % 10;
            quo_in /= 10;

            rev_in = rev_in * 10 + rem_in;

        }
        //cout << rev_in << " ";
        if (all[rev_in])
            count_1++;
        else
            return false;
    }
    //cout << rev<< " ";
    quo = rev, rev = 0;
    while (quo) {
        rem = quo % 10;
        quo /= 10;

        rev = rev * 10 + rem;
        //cout << rev << "\n";
        if (all[rev])
            count_2++;
        else return false;
    }

    if (count_1++ == count_2++)
        return true;
    return false;

}

int main() {

    all[0] = all[1] = false;
    for (int i = 2; i * i <= MAX; ++i)
        if (all[i])
            for (int j = 2 * i; j <= MAX; j += i)
                all[j] = false;
    int sum = 0;
    long n;
    cin >> n;
    for (int j = 10; j <= n; j++)
        if (all[j])
            if (is_trucatable(j))
            //cout << "Yes \n";
                sum += j;
    cout << sum;

    return 0;
}

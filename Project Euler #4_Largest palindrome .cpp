//Author:Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(long n)
{
    string s = to_string(n);
    string copy = s;
    reverse(copy.begin(), copy.end());
    if(copy == s)
        return true;
   return false;
}

int main(){
    unsigned long long mul;
    vector <long> palindrome;
    for(long i = 100; i < 1000; i++)
           for(long j = 100; j <= i; j++)
           {
               mul = i * j;
               if(is_palindrome(mul))
                   palindrome.push_back(mul);
               }
   
        int T;
        cin >> T;
        long n;
        sort(palindrome.begin(), palindrome.end());
        while(T--)
        {
            cin >> n;
            auto  ans = lower_bound(palindrome.begin(),palindrome.end(),n) - 1;
             cout << *ans << "\n";
        }
    return 0;
}

//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int sum(int num)
{
    int rem, sum =0;
    while(num)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    return sum;
}

int main(){
    int n, num, val;
    cin >> n;
    int maxm = INT_MIN;
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
           {
            val = sum(i);
            if(val > maxm) 
            {
                maxm = val;
                num = i;
            }
        }
    cout << num;
    return 0;
}

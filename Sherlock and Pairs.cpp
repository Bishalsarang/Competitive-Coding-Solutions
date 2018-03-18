//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    long n;
    while(t--)
    {
        cin >> n;
        vector<long> nums(n);
        map<long, long> counter;
        
        for(int i = 0; i < n; i++)
        {
            cin >> nums[i];
            counter[nums[i]]++;    
        }
        long x, sum = 0;
        for(auto values: counter)
        {
            x = values.second;
            if(x >= 2)
                sum += x * (x - 1) / 2;
        }
        cout << sum * 2  << "\n";
        
    }
    return 0;
}

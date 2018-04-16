//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector <int> prices, int k) {
   sort(prices.begin(), prices.end());
    int len = prices.size();
    long long total = 0;
    int count  = 0;
    for(int i = 0; i < len; i++)
    {
         
         if(total > k)
             return --count;
        total += prices[i];
       count++;
       
            
    }
    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> prices(n);
    for(int prices_i = 0; prices_i < n; prices_i++){
       cin >> prices[prices_i];
    }
    int result = maximumToys(prices, k);
    cout << result << endl;
    return 0;
}

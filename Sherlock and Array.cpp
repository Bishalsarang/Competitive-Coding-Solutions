//Author: Bishak Sarang
#include <bits/stdc++.h>

using namespace std;


int main() {
    int T;
    cin >> T;
    int n;
    while(T--)
    {
        bool flag = false;
        cin >> n;
        long left_sum[n] = {};
        long right_sum[n] = {};
        vector <long> array(n), array_copy(n);
        long prev = 0;
       
        for(int i = 0; i < n; i++)
        {
            cin >> array[i];
            left_sum[i] = prev + array[i];
            prev = left_sum[i];
        }
        prev = 0;
       for(int i = n - 1; i >= 0; i--)
       {
           right_sum[i] = prev + array[i];
           prev = right_sum[i];
       }
        
         if(n == 1)
        {
            
            cout << "YES\n";
            continue;
        }
        
        for(int i = 1; i < n - 1; i++)
       {
           if(left_sum[i - 1] == right_sum[i + 1])
           {
               flag = true;
               break;
           }
       }
        //cout << n << " ";
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

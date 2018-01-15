//Author : Bishal Sarang
#include <bits/stdc++.h>

using namespace std;


int main() {
    int T, n, k;
    cin >> T; 
    while(T--)
    {
       cin >> n >> k; 
        int array[n], arrived = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> array[i];
           if(array[i] <= 0)
               arrived++;
        } 
        if(arrived < k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
       cin >> array[i];
    int diff = INT_MAX;
    map <int, int> check; //Map element and index
     for(int i = 0; i < n; i++)
    {
        if(check[array[i]])
             diff = min(diff,i - check[array[i]] + 1); //dont map to zeroth index as it gives false. So we added 1 for each mapping
        check[array[i]] = i + 1;
   }
   if(diff == INT_MAX)
       cout << - 1;
    else
        cout << diff;
 
    return 0;
}
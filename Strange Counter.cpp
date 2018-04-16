//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
int main() {
    ull t;
    cin >> t;
    map<ull, ull> times;
    
   ull x = 1, y = 3, tm = 1;
    
    while(tm <= 1000000000000)
    {
        times[x] = y;
        //cout << time[x] << " ";
        tm = y;
        x += y;
        y *= 2;  
    }
    ull prev = 0;
    for(auto time: times)
    {
    //cout << time.first << " " << time.second << endl;
        if(t == time.first)
        {
            cout << time.second;
            return 0;
        }
        if(t > time.first)
        {
            prev = time.first;
            
        }
        if(t < time.first)
        {
            cout << times[prev] -( t - prev);
        
            return 0;
        }
        
    }
    return 0;
}

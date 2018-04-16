//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;
int main(){
        int T;
        unsigned long long l,n,sum = 0;
        cin >> T;
    int num;
    while(T--) 
    {
    sum = 0;
    cin >> num;
            l = (((num-1) / 3) * 3);
            n = (l/3) + 1;
            sum += (n*(l))/2;
            
            
            l = (((num-1) / 5) * 5);
            n = (l/5) + 1;
            sum += (n*(l))/2;
            
            
            l = (((num-1) / 15) * 15);
            n = (l/15) + 1;
            sum -= (n*(l))/2;
            
            cout << sum << "\n";
        
    }
        return 0;
}
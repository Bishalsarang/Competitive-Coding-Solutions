//Author:Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int N;
    while(T--)
    {
        cin >> N;
        int lcm = 1;
        for(int i = 2; i <= N; i++)
          lcm = (i * lcm) / (__gcd(i, lcm)); 
        cout << lcm << "\n";
    }
    return 0;
}

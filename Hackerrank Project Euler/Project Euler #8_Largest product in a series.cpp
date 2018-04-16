//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main(){
    int T;
    cin >> T;
    int N, K;
    string num;
    while(T--)
    {
        cin >> N >> K;
        cin >> num;
       int product;
        int res = 0;
        for(int i = 0; i < N - K + 1; i++)
        { 
          product = 1;
         int count = 0;
            for(int j = i; j < N; j++)
            {
               if(count >= K)
                   break;
                product *= (num[j] - '0');
                 count++;
            }
         res = max(product, res);
         
        }
        cout << res << "\n"; 
    }
        return 0;
}

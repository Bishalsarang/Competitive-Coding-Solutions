#include <bits/stdc++.h>
using namespace std;

int main() {
   int T;
    cin >> T;
    string N;
    while(T--)
    {
        cin >> N;
        int len = N.length();
        long num = stoi(N);
        int count = 0;
        for(int i = 0; i < len; i++)
        {
            if((N[i] - '0') != 0)
               if(num % (N[i] - '0') == 0)
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}

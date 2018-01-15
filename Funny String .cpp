//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    string s, c;
    while(T--)
    {
        cin >> s;
        c = s;
        reverse(s.begin(), s.end());
        int len = s.length();
        bool flag = true;
        for(int i = 1; i < len; i++)
        {
            int x = abs(s[i] - s[i - 1]);
            int y = abs(c[i] - c[i - 1]);
            if(x != y)
            {
                    cout << "Not Funny \n";
                    flag = false;
                    break;
             }
           }
       if(flag)
            cout << "Funny \n";
    }
    
    return 0;
}

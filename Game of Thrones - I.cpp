//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int alpha[26] = {0};
    int len = s.length();
    for(int i = 0; i < len; i++)
        alpha[s[i] - 'a']++;
        int count = 0;
     for(int i = 0; i < 26; i++)
        if(alpha[i])
            if(alpha[i] % 2 != 0)
                count++;
      if(count != 1 && count != 0)
        cout << "NO";
       else
            cout << "YES";
    return 0;
}
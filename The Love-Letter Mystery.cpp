//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int len = s.length();

        int mid = len / 2;
   
        int alpha_1[26] = {0}, alpha_2[26] ={0};
        for (int i = 0; i < mid; i++) 
            alpha_1[s[i] - 'a']++;
        int start;
        if (len % 2 == 0)
            start = mid;
        else
            start = mid + 1;
        int count = 0;
        for (int i = 0, j = len - 1; i < len; i++, j--)
            count += abs(abs(s[i] - 'a') - abs(s[j] - 'a'));
        cout << count / 2 << "\n";
    }
    return 0;
}
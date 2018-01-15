//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int alpha[26] = { };
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(),s.begin(),::tolower);
    int len = s.length();
    for(int i = 0; i < len; i++)
        alpha[s[i] - 'a']++;
    for(int i = 0; i < 26; i++)
        if(alpha[i] == 0)
        {
            cout << "not pangram";
            return 0;
        }
    cout << "pangram";
        return 0;
}
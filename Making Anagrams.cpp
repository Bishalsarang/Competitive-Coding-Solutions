//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
  
    string s, a;
    cin >> s >> a;
    int first[26] = {0}, second[26] = {0};
    int len_first = s.length(), len_second = a.length();
    for(int i = 0; i < len_first; i++)
        first[s[i] - 'a']++;
    for(int i = 0; i < len_second; i++)
        second[a[i] - 'a']++;
    int count = 0;
    for(int i = 0; i < 26; i++)
        count += abs(first[i] - second[i]);
    cout << count;
        
    return 0;
}

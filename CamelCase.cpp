//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;
    int len = s.length();
    int upper = 0;
    for(int i = 0; i < len; i++)
        if(isupper(s[i]))
            upper++;
    cout << upper + 1;
    return 0;
}

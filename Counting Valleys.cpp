//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int len = s.length();
    int level = 0, count = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'U')
            level++;
        else
            level--;
        if(level == 0 && s[i] == 'U')
            count++;
        
    }
    cout << count ;
    return 0;
}

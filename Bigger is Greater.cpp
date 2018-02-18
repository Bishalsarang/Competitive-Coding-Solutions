//Author : Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    string s, s_copy;
    while(T--)
    {
        
        cin >> s;
        s_copy = s;
        int len = s.length();
       int i = 0;
        do
        {
            if(i == 1)
                break;
            i++;
            
            
        } while(next_permutation(s.begin(), s.end()));
        if( s <= s_copy)
            cout << "no answer\n";
        else
            cout << s << "\n";
    }
    return 0;
}

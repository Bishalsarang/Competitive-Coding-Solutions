//Author: Bishal Sarang
#include <bits/stdc++.h>
    using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        stack < char > st;
        string s;
        int flag = 1;
        cin >> s;
        int len = s.length();
        for (int i = 0; i < len; i++) {

            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
                st.push(s[i]);
            else if (st.empty())
                st.push(s[i]);
            if (!st.empty())
                if ((s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '[') || (s[i] == ')' && st.top() == '('))
                    st.pop();
        }
        if (st.empty())
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
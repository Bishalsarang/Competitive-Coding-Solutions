//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;
        set <char> st;
        for(int i = 0; i < s.length(); i++)
            st.insert(s[i]);
        cout << st.size() << "\n";
        }
   
    return 0;
}

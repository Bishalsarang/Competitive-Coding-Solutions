//Author : Bishal Sarang
#include <bits/stdc++.h>

using namespace std;
int main() {
   int n;
    cin >> n;
    string s;
    map <string, int> xa;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        xa[s]++;
        
        
    }
    int q;
    cin >> q;
    while(q--)
    {
        cin >> s;
        cout << xa[s] << "\n";
    }
    return 0;
}

//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
   int N;
    cin >> N;
    string s;
    vector <string> vect;
    while(N--)
    {
        cin >> s;
        vect.push_back(s);
    }
    sort(vect.begin(), vect.end());
    
    int queries;
    cin >> queries;
    string quer_string;
    while(queries--)
    {
        cin >> quer_string;
        int len = quer_string.length();
        int sum = 0;
        auto pos = find(vect.begin(), vect.end(), quer_string);
        for(int i = 0; i < len; i++)
          sum +=  int(quer_string [i]- 'A') + 1;
        cout << sum * (pos - vect.begin() + 1) << "\n" ;
            
}
    return 0;
}

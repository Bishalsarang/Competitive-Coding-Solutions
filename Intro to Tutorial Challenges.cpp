#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int value, n;
    cin >> value >> n;
    vector <int> vect(n);
    for(int i = 0; i < n; i++)
        cin >> vect[i];
     
   auto it = find (vect.begin(), vect.end(), value);
    cout << it - vect.begin();
    return 0;
}

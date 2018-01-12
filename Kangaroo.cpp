//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;
int main() {
    int p1, v1, p2, v2;
    cin >> p1 >> v1 >> p2 >> v2;
    if (v2 >= v1) 
        cout << "NO"; 
    else if ((p2 - p1) % (v1 - v2) == 0) 
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
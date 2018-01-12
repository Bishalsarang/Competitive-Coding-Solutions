//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    int A, B, C;
    while(q--)
    {
        cin >> A >> B >> C;
        if (abs(C - B) > abs(C - A))
            cout << "Cat A \n";
        else if (abs(C - A) > abs(C - B))
            cout << "Cat B \n";
        else 
            cout << "Mouse C \n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    int space = num - 1;
    while (space >= 0) {
        string blank(space, ' ');
        string pound(num - space, '#');
        cout << blank << pound;
        space--;
        cout << endl;
    }
    return 0;
}
//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    int grade;
    for (int i = 1; i <= num; i++) {
        cin >> grade;
        if (grade < 38) cout << grade << "\n";
        else {
            int rem = grade % 5;
            switch (rem) {
            case 3:
                cout << grade + 2 << "\n";
                break;
            case 4:
                cout << grade + 1 << "\n";
                break;
            default:
                cout << grade << "\n";
            }

        }
    }

    return 0;
}
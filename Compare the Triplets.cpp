//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a_1, a_2, a_3, b_1, b_2, b_3;
    cin >> a_1 >> a_2 >> a_3 >> b_1 >> b_2 >> b_3;
    int alice = 0, bob = 0;
    if(a_1 != b_1 )
      a_1 > b_1 ? alice++ : bob++;
    if(a_2 != b_2 )
       a_2 > b_2 ? alice++ : bob++;
    if(a_3 != b_3 )
       a_3 > b_3 ? alice++ : bob++;
    cout << alice << " " << bob;
    return 0;
}

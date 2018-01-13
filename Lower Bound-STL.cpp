#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;
    vector <int> vect(N);
    for(int i =0 ; i < N; i++)
           cin >> vect[i];
    int Q;
    cin >> Q;
    int val;
    while(Q--)
    {
        cin >> val;
       // auto found = find(vect.begin(), vect.end(), val);
        auto lower = lower_bound(vect.begin(), vect.end(), val);
        if( *lower == val)
            cout << "Yes " << lower - vect.begin() + 1 << "\n";
        else
            cout << "No " << lower - vect.begin() + 1 << "\n"; 
}
    return 0;
}

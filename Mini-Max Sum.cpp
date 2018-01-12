//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
        vector <long long> vect(5);
        for(int i = 0; i < 5; i++)
            cin >> vect[i];
        cout <<  accumulate(vect.begin(), vect.end(),(long long) 0) - *max_element(vect.begin(), vect.end()) << " " 
             << accumulate(vect.begin(), vect.end(),(long long) 0 ) - *min_element(vect.begin(), vect.end());
    //Dont forgot to type cast (lon long) 0 , else overflow occurs
    return 0;
}

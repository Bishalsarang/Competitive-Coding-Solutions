//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;
int main() {
      long low, up , num, count = 0;
    cin >> low >> up >> num;
    string s, cp ;
    for(int i = low; i <= up; i++)
    {
        s = to_string(i);
        cp = s;
        reverse(cp.begin(), cp.end());
        long a = stol(s), b = stol(cp);
        if(abs(a - b) % num == 0)
            count++;
        
    }
    cout << count;
    
    return 0;
}

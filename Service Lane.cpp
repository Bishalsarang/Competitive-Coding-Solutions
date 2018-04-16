//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> width(n);
    for(int i = 0; i < n; i++)
    {
        cin >> width[i];
    }
    int x , y;
    while(t--)
    {
        cin >> x >> y;
        //end() iterator ma width().begin() + y garda last element exclude hunx
        cout << *min_element(width.begin() + x, width.begin() + (y + 1)) << "\n";
    }

    return 0;
}
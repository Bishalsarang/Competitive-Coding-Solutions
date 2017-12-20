//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map <int, int> m;
    int num, maxm = 0;;
    while(n--)
    {
        cin >> num;
        m[num]++;
        maxm = max(m[num],maxm);
    }
    cout << maxm;
}
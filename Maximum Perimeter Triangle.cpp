//Author: Bishal  Sarang
#include <bits/stdc++.h>

bool isvalid(long a, long b, long c)
{
    return (a + b > c && a + c > b && b + c > a);
}

using namespace std;
int main() {
    int n;
    cin >> n;
    vector <long> sides(n);
    for(int i = 0; i < n; i++)
    {
        cin >> sides[i];
    }
    sort(sides.begin(), sides.end());
    long maxm = INT_MIN, a , b, c;
    bool found = false;
    for(int i = 0; i < n - 2; i++)
    {
       if(isvalid(sides[i], sides[i + 1], sides[i + 2]))
       {
           if( sides[i] + sides[i + 1]+ sides[i + 2] > maxm)
           {
               a = sides[i];
               b = sides[i + 1];
               c = sides[i + 2];
               found = true;
       }
    }
    }
    if(found)
        cout << a << " " << b << " " << c;
    else
        cout << -1;
    return 0;
}

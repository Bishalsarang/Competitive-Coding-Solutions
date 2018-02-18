//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

bool comp(string left, string right)
{
    if(left.size() == right.size())
        return left < right;
    return left.size() < right.size();
}
int main(){
    int n;
    cin >> n;
    vector <string> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i];
    sort(s.begin(), s.end(), comp);
    for(auto x: s)
        cout << x << "\n";
    
    return 0;
}

//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int deletion(string s)
{
    int len = s.length();
    int count = 0;
    for(int i = 1; i < s.length(); i++)
    {
        if(!(s[i] - s[i - 1]))
        {
            count++;
            s.erase(s.begin() + i);
            i--;
            
        }
            
    }
    

    return count;
}

int main() {
    
    int T;
    cin >> T;
    string s;
    while(T--)
    {
        cin >> s;
        cout << deletion(s) << "\n";
        
        
    }
    return 0;
}
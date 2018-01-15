//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;
    int len = s.length();
    int total = len / 3;
    int count = 0;
   for(int i = 0; i < len; i += 3)
   {
       if(s[i] != 'S')
          count++;
        if(s[i + 1] != 'O')
          count++;
        if(s[i + 2] != 'S')
          count++;
   }
        
    cout <<  count;
    return 0;
}
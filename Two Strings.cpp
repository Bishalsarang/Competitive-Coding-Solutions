//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    
       int T;
       cin >> T;
        string s, a;
       while(T--)
       {
           bool flag = true;
             int first[26] = {}, second[26] = {};
           cin >> s >> a;
        
           int len_first = s.length(), len_second = a.length();
           
           for(int i = 0; i < len_first; i++)
               first[s[i] - 'a']++;
           for(int i = 0; i < len_second; i++)
               second[a[i] - 'a']++;
       
           for(int i =0; i < 26; i++)
           {
               if(first[i] && second[i])
               {
                    cout << "YES\n";
                    flag = false;
                    break;
                }
           }
           if(flag)
               cout << "NO \n";
               
           
       }
    return 0;
}
//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

//12345
bool is_divisible(string s)
{
   if(s.length() <= 2)
       {
       sort(s.begin(), s.end());
       do
       {
        if(stoi(s) % 8 == 0)
            return true;
           
       } while(next_permutation(s.begin(), s.end()));
        return false;
    }
    int len = s.length();
    for(int i = 0; i < len; i++)
        for(int j =   0; j < len ; j++)
            for(int k = 0; k < len ; k++)
                
                if(i != j && i != k && j != k)
                {
              //  cout << s[i] << " " << s[j] << " " << s[k] << "\n";
                    int naya = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                    if(naya % 8 == 0)
                       return true;
                }  
                
    return false;
}
int main() {
    int t;
    string num;
    
    cin >> t;
    while(t--)
    {
        cin >> num;
        if(is_divisible(num))
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
    return 0;
}

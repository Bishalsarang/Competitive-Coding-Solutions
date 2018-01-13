#include <bits/stdc++.h>

using namespace std;

int check(int a[])
{
      int prev = a[0];
    //cout << a[0];
      for(int i = 1;i < 26; i++)
      {
            if(a[i] == 0)
                  continue;
            if(prev != a[i])
                  return 0;
      }
      return 1;

}

int main()
{
      string s;
    cin >> s;
    int len = s.length();
    int alpha[26] = {0};
    for(int i = 0; i < len; i++)
    {
        alpha[s[i] - 'a']++;
}
      if(check(alpha))
      {
            cout << "YES\n";
            return 0;
      }
 

      for(int i = 0; i < 26; i++)
      {
            alpha[i] -= 1;
            if(check(alpha))
            { 
                cout << "YES\n";
                return 0;
            }
            alpha[i] += 1;
      }
      cout << "NO \n";
    return 0;
}


   
   
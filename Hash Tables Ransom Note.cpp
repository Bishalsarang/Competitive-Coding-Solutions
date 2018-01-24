//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int m, n;
    cin >> m >> n;
    map <string, int> check;
    string mag, note;
    while(m--)
    {
        cin >> mag;
        check[mag]++;
    }
    int count = 0;
     for(int i = 0; i <n; i++)
     {
         cin >> note;
         if(!check[note] )
            {
            cout << "No";
            return 0;
        }
         else check[note]--;
     }
    
     cout << "Yes" ;
    return 0;
}

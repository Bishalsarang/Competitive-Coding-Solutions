#include <bits/stdc++.h>
using namespace std;
int main()
{
string a, b;
    cin >> a >> b;
    int alpha_first[26] = {0}, alpha_second[26] = {0};
    int len_1 = a.length();
    int len_2 = b.length();
    int count = 0;
    for(int i = 0; i < len_1; i++)
    {
        alpha_first[a[i] - 'a']++;
    }
     for(int i = 0; i < len_2; i++)
    {
        alpha_second[b[i] - 'a']++;
     }
    for(int i = 0; i < 26; i++)
    {
        if(alpha_first[i] != alpha_second[i])
            count += abs(alpha_first[i] - alpha_second[i]);
    }
    cout << count;


return 0;
}
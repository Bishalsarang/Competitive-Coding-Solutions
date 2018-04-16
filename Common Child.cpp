//Author: Bishal Sarang
#include <bits/stdc++.h>
#define MAX 5003
using namespace std;
int l[MAX][MAX];
int lcs(string a, string b, int l1, int l2)
{

    for(int i= 0; i <= l1; i++)
        for(int j = 0; j <= l2; j++)
        {
            if(i == 0 || j == 0)
                l[i][j] = 0;
            else if(a[i - 1] == b[j -1])
                l[i][j] = 1 + l[i - 1][j - 1];
            else
            {
                l[i][j] = max(l[i][j - 1], l[i - 1][j]);
            }
        }
    return l[l1][l2];
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int len_1 = s1.length();
    int len_2 = s2.length();
    cout << lcs(s1, s2, len_1, len_2);
    return 0;
}
